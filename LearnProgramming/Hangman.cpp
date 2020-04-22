#include<iostream>
#include<string>
#include<fstream>
#include<set>
#include<map>
#include<vector>

using namespace std;

struct resultStats {
	int winStat = 0, looseStat = 0;
	string lastPlayedWord;
};

map<string, resultStats > resultMap;
vector<string> words;

void checkValidityOfWord(string str, string underscoredStr) {
	char input;
	int attempt = 0;
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
			cout << "\nYou lost";
			break;
		}
		if (underscoredStr == str) {
			cout << "\nYOU WON!";
			break;
		}
	}
}

vector<string> returnUserStats() {
	string currentUserName;
	string line2;
	char* ptr;
	vector<string> subStrings;
	cout << "Enter Username: ";
	cin >> currentUserName;
	ifstream myfile2("e:\hangmanResultStats.txt");
	if (myfile2.is_open()) {
		while (getline(myfile2, line2)) {
			//ptr = strtok(line2, ",");
			while (ptr != NULL) {
				string str = ptr;
				subStrings.push_back(str);
				ptr = strtok(NULL, ",");
			}
			resultStats res;
			if (resultMap.find(subStrings[0]) != resultMap.end()) {
				cout << "This name is already taken, try something else: " << endl;
				returnUserStats();
			}
			else {
				res.winStat = stoi(subStrings[1]);
				res.looseStat = stoi(subStrings[2]);
				res.lastPlayedWord = subStrings[3];
				resultMap.insert(subStrings[0], res);
			}
		}
		myfile2.close();
	}
	return subStrings;

}

void getInputs() {
	string line, newStr, underscoredStr;
	int lineNum = 0;
	ifstream myfile("E:\hangman.txt");
	if (myfile.is_open()) {
		while (getline(myfile, line)) {
			words.push_back(line);
		}
	}
	
}

void main() {
	//chooseWordFromFile();
}