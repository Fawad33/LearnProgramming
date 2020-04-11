#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

void checkValidityOfWord(string str, string underscoredStr) {
	char input;	
	int attempt = 0;
	vector<char> wrongAns;
	set<char> guesses;	
	while (true) {
		cout << "\n" <<underscoredStr << "\nEnter you guess: ";
		cin >> input;		
		if (guesses.find(input) != guesses.end()) {
			cout << "\nAlready entered, try something else";
		}
		else {
			guesses.insert(input);
			for (int i = 0; i < str.size(); i++) {
				if (str[i] == input) {					
					for (int i = 0; i < str.size(); i++) {
						if (str[i] == input) {
							underscoredStr[i] = input;
						}
					}
					cout << "\nCorrect guess! \nPrevious Inputs: ";
					for (auto it = guesses.begin(); it != guesses.end(); it++) {
						cout << *it << " ";
					}
				}
				else {
					attempt++;
					cout << "\nIncorrect guess! \nPrevious Inputs: ";
					for (auto it = guesses.begin(); it != guesses.end(); it++) {
						cout << *it << " ";
					}
					break;
				}
			}		
		}		
		cout << "\nYou have " << (13 - attempt) << " attempts left";
		if (attempt == 13) {
			cout << "\nYou lost";
			break;
		}
	}
}

void main() {
	string word = "hello";
	string underscoredStr;
	for (int i = 0; i < word.length(); i++) {
		underscoredStr += '_';
	}
	checkValidityOfWord(word, underscoredStr);

}