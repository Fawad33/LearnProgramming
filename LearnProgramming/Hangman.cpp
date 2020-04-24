#include<iostream>
#include<string>
#include<fstream>
#include<set>
#include<map>
#include<vector>

using namespace std;

struct resultStats {
	int winStat = 0, looseStat = 0, countOfLastPlayedWord = 0;
};

resultStats res;
map<string, resultStats> resultMap;
vector<string> words;

map<string, resultStats> returnUserStatsMap() {
	string currentUserName;
	string line2;
	char* ptr;
	vector<string> subStrings;
	ifstream myfile2("E:\hangmanResultStats.txt");
	if (myfile2.is_open()) {
		while (getline(myfile2, line2)) {
			char cstr[100];
			char* context = NULL;
			strcpy_s(cstr, line2.c_str());
			ptr = strtok_s(cstr, ",", &context);
			while (ptr != NULL) {
				//string str = ptr;
				subStrings.push_back(ptr);
				ptr = strtok_s(NULL, ",", &context);
			}

			res.winStat = stoi(subStrings[1]);
			res.looseStat = stoi(subStrings[2]);
			res.countOfLastPlayedWord = stoi(subStrings[3]);
			//resultMap[subStrings[0]] = res;
			resultMap.insert(pair<string, resultStats>(subStrings[0], res));//just for learning insert
		}
		myfile2.close();
	}
	return resultMap;
}

void getWordForGame() {
	string line;
	ifstream myfile("E:\hangmanInput.txt");
	if (myfile.is_open()) {
		while (getline(myfile, line)) {
			words.push_back(line);
		}
		myfile.close();
	}
}

vector<string> wordAndUnderscore(int num) {
	vector<string> wordForGame;
	string currentWord = words[num];
	string underScore;
	for (int i = 0; i < currentWord.size(); i++) {
		underScore += '_';
	}
	wordForGame.push_back(currentWord);
	wordForGame.push_back(underScore);
	return wordForGame;
}

vector<string> checkUserName(map<string, resultStats> mainFunctionMap) {
	string userName;
	int win = 0, loose = 0, lastWord = 0;
	vector<string> currentPlayer;
	cout << "enter username: ";
	cin >> userName;
	mainFunctionMap = returnUserStatsMap();
	auto it = mainFunctionMap.find(userName);
	if (mainFunctionMap.find(userName) != mainFunctionMap.end()) {
		win = it->second.winStat;
		loose = it->second.looseStat;
		lastWord = it->second.countOfLastPlayedWord;
	}
	currentPlayer.push_back(userName);
	currentPlayer.push_back(to_string(win));
	currentPlayer.push_back(to_string(loose));
	currentPlayer.push_back(to_string(lastWord));
	return currentPlayer;
}

void saveAllUserStats(map<string, resultStats> userList) {
	string convertMapToString;

	for (auto it = userList.begin(); it != userList.end(); it++) {
		convertMapToString += it->first;
		convertMapToString += ",";
		convertMapToString += to_string(it->second.winStat);
		convertMapToString += ",";
		convertMapToString += to_string(it->second.looseStat);
		convertMapToString += ",";
		convertMapToString += to_string(it->second.countOfLastPlayedWord);
		convertMapToString += "\n";

		ofstream myfile3("E:\hangmanResultStats.txt");
		if (myfile3.is_open()) {
			myfile3 << convertMapToString << "\n";
		}
		myfile3.close();
	}
}

void saveCurrentPlayerStat(string name, int playerWin, int playerLoose, int playerLastPlayed) {
	res.winStat = playerWin;
	res.looseStat = playerLoose;
	res.countOfLastPlayedWord = playerLastPlayed;
	resultMap[name] = res;
}

void checkValidityOfWord(string str, string underscoredStr, string name, int winScore, int looseScore, int lastPlayedWord) {
	char input;
	int attempt = 0;
	bool continueFlag = false;
	set<char> guesses;
	while (true) {
		cout << "\n" << underscoredStr << "\nEnter you guess: ";
		cin >> input;
		bool flag = false;
		if (guesses.find(input) != guesses.end()) {
			cout << "\nAlready entered, try something else";
		}
		else {
			guesses.insert(input);
			for (int i = 0; i < str.size(); i++) {
				if (str[i] == input) {
					flag = true;
					underscoredStr[i] = input;			
				}
			}
			if (flag == false) {
				attempt++;
				cout << "\nIncorrect guess! \nPrevious Inputs: ";
			}
			else {
				cout << "\nCorrect guess! \nPrevious Inputs: ";
			}
		}
		for (auto it = guesses.begin(); it != guesses.end(); it++) {
			cout << *it << " ";
		}
		cout << "\nYou have " << (13 - attempt) << " attempts left";
		if (attempt == 13) {
			looseScore++;
			lastPlayedWord++;
			if (lastPlayedWord > (words.size() - 1)) {
				lastPlayedWord = 0;
			}
			saveCurrentPlayerStat(name, winScore, looseScore, lastPlayedWord);
			saveAllUserStats(resultMap);
			continueFlag = true;
			cout << "\nYou lost";
			break;
		}
		if (underscoredStr == str) {
			winScore++;
			lastPlayedWord++;
			if (lastPlayedWord > (words.size() - 1)) {
				lastPlayedWord = 0;
			}
			saveCurrentPlayerStat(name, winScore, looseScore, lastPlayedWord);
			saveAllUserStats(resultMap);
			continueFlag = true;
			cout << "\nYOU WON!";
			break;
		}		
	}
	if (continueFlag == true) {
		cout << "Do you want to continue playing? [Enter Y to continue/press any key + enter to logoff]: ";
		string gameContinueInput;
		cin >> gameContinueInput;
		if (gameContinueInput == "Y") {
			vector<string> NewWords = wordAndUnderscore(lastPlayedWord);
			string str1 = NewWords[0];
			string str2 = NewWords[1];
			checkValidityOfWord(str1, str2, name, winScore, looseScore, lastPlayedWord);
		}
	}
}


void main() {
	map<string, resultStats> mainFunctionMap;
	mainFunctionMap = returnUserStatsMap();
	vector<string> currentUserNameAndStat = checkUserName(mainFunctionMap);
	string name = currentUserNameAndStat[0];
	int win = stoi(currentUserNameAndStat[1]);
	int loose = stoi(currentUserNameAndStat[2]);
	int lastWord = stoi(currentUserNameAndStat[3]);
	getWordForGame();
	vector<string> currentWordsToPlay = wordAndUnderscore(lastWord);
	string str1 = currentWordsToPlay[0];
	string str2 = currentWordsToPlay[1];
	checkValidityOfWord(str1, str2, name, win, loose, lastWord);
}