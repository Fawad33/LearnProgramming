#include<iostream>
#include<string>
#include<vector>

using namespace std;

string replaceWithUnderscore(string s) {
	string underScoredStr;
	int length = s.length();
	for (int i = 0; i < length; i++) {
		underScoredStr += "_";
	}
	return underScoredStr;
}

void checkValidityOfWord(string str, string underscoredStr) {
	char input;
	
	int attempt = 0;
	vector<char> wrongAns;
	while (attempt < 13) {
		for (int i = 0; i < underscoredStr.size(); i++) {
			cout << "\nEnter your guess: ";
			cin >> input;
			if (underscoredStr[i] == '_') {				
				vector<int> v;
				for (int j = 0; j < str.size(); j++) {
					if (str[j] == input) {
						v.push_back(j);
					}
				}
				for (int k = 0; k < v.size(); k++) {
					underscoredStr[v[k]] = input;
				}
				cout << "\nCorrect guess! : " << underscoredStr;
			}
			else {
				attempt++;
				wrongAns.push_back(input);
				cout << "\nWrong Guess!";
				cout << "\nPrevious Inputs: ";
				for (auto i = 0; i < wrongAns.size(); i++) {
					cout << wrongAns[i] << ", ";
				}
			}
		}
	}
}

void main() {
	string word = "hello";
	string underscoredStr = replaceWithUnderscore(word);
	cout << underscoredStr;
	checkValidityOfWord(word, underscoredStr);

}