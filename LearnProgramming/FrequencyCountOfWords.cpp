#include<iostream>
#include<string>
#include<map>

using namespace std;

void countWords(string word);
map<string, int> wordCount;

void seperateWord(string str) {
	string word = "";
	for (auto i : str) {
		if (i == ' ') {
			countWords(word);
			word = "";
		}
		else {
			word += i;
		}
	}
	countWords(word);
}

void countWords(string word) {		
	map<string, int>::iterator mapIterator;
	mapIterator = wordCount.find(word);
	if (mapIterator != wordCount.end()) {
		mapIterator->second++;		
	}
	else {
		wordCount.insert({ word, 1 });
	}
}

//int main() {
//	string str = "nigga nigga nigga";
//	seperateWord(str);
//	for (auto i = wordCount.begin(); i != wordCount.end(); i++) {
//		cout << i->first << " appeared " << i->second << " times" << endl;
//	}
//	return 0;
//}