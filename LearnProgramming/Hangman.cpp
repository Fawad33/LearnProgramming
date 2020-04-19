#include<iostream>
#include<string>
#include<fstream>
#include<set>

using namespace std;

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

void chooseWordFromFile() {
	string line, newStr, underscoredStr;
	int lineNum = 0;
	ifstream myfile("E:\hangman.txt");
	if (myfile.is_open()) {
		getline(myfile, line);
		lineNum = stoi(line);
		getline(myfile, line);
		newStr = line;
		cout << newStr;
		for (int i = 0; i < newStr.length(); i++) {
			underscoredStr += '_';
		}
		lineNum++;
		checkValidityOfWord(newStr, underscoredStr);
		ofstream myfile("E:\hangman.txt");
		myfile << lineNum;
		myfile.close();
	}
}

//void main() {
//	chooseWordFromFile();
//}