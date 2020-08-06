#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

class WordPattern {
public:
	vector<string> strWordArray(string str) {
		vector<string> strWord;
		string word = "";
		for (auto i : str) {
			if (i == ' ') {
				strWord.push_back(word);
				word = "";
			}
			else {
				word += i;
			}
		}
		strWord.push_back(word);
		return strWord;
	}

	bool wordPattern(string pattern, string str) {		
		vector<string> strWord = strWordArray(str);
		map<char, string> patternMap;
		if (pattern.length() != strWord.size())
			return false;
		
		for (int i = 0; i < pattern.length(); i++) {
			map<char, string>::iterator mapIterator;
			map<char, string>::iterator mapIterator2;
			mapIterator = patternMap.find(pattern[i]);
			mapIterator2 = patternMap.find(pattern[i]);
			if (mapIterator == patternMap.end()) {
				for (mapIterator2 = patternMap.begin(); mapIterator2 != patternMap.end(); mapIterator2++) {
					if (mapIterator2->second == strWord[i])
						return false;
				}
				patternMap.insert({ pattern[i], strWord[i] });
			}
			else if (mapIterator != patternMap.end() && mapIterator->second != strWord[i]) {
				return false;
			}
		}
		return true;
	}
};

void main() {
	string pattern = "abba";
	string str = "dog dog dog dog";
	WordPattern wordPattern;
	cout << wordPattern.wordPattern(pattern, str);
}