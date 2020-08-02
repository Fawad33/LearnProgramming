#include<iostream>
#include<map>
#include<string>

using namespace std;

class WordPattern {
public:
	map<char, int> patternMap;
	map<string, int> strMap;
	map<char, int> patternToMapConverter(string pattern, map<char, int> patternMap) {
		int pos = 0;
		for (auto i : pattern) {
			map<char, int>::iterator patternMapIterator;
			patternMapIterator = patternMap.find(i);
			if (patternMapIterator != patternMap.end()) {
				patternMapIterator->second++;
				patternMapIterator->second += pos;
				pos++;
			}
			else {
				patternMap.insert({ i, (1 + pos)});
				pos++;
			}
		}
		return patternMap;
	}

	void seperateWord(string str) {
		string word = "";
		for (auto i : str) {
			if (i == ' ') {
				strToMapConverter(word);
				word = "";
			}
			else {
				word += i;
			}
		}
		strToMapConverter(word);
	}

	void strToMapConverter(string str) {
		map<string, int>::iterator strMapIterator;
		int pos2 = 0;
		strMapIterator = strMap.find(str);
		if (strMapIterator != strMap.end()) {
			strMapIterator->second++;
			strMapIterator->second += pos2;
			pos2++;
		}
		else {
			strMap.insert({ str, (1 + pos2) });
			pos2++;
		}
	}

	bool wordPattern(string pattern, string str) {		
		patternMap = patternToMapConverter(pattern, patternMap);
		if (patternMap.size() != strMap.size())
			return false;
		else {
			for (auto i = strMap.begin(), j = patternMap.begin(); i != strMap.end(), j != patternMap.end(); i++, j++) {

			}
		}
	}
};

void main() {
	string pattern = "abba";
	string str = "cat dog dog cat";
	WordPattern wordPattern;
	wordPattern.seperateWord(str);
	wordPattern.wordPattern(pattern, str);
}