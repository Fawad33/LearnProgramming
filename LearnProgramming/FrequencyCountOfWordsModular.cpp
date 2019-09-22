#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

vector<string> seperateWords(string str) {
	vector<string> singleWord;
	string word = "";
	for (auto i : str) {
		if (i == ' ') {
			singleWord.push_back(word);
			word = "";
		}
		else {
			word += i;
		}
	}
	singleWord.push_back(word);
	return singleWord;
}

void returnWordCount(vector<string>& wordList) {
	map<string, int> countWords;
	map<string, int> ::iterator mapIterator;	
	for (auto i : wordList) {
		mapIterator = countWords.find(i);
		if (mapIterator != countWords.end())
			mapIterator->second++;
		else
			countWords.insert({ i, 1 });
	}

	for (auto i = countWords.begin(); i != countWords.end(); i++)
		cout << i->first << " appeared " << i->second << " times" << endl;

	//return countWords;
}

//int main() {
//	vector<string> wordList;
//	string str = "a quick brown fox jumped over the lazy dog";
//	wordList = seperateWords(str);
//	returnWordCount(wordList);
//	return 0;
//}