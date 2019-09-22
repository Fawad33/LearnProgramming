#include<iostream>
#include<map>
#include<string>
#include<vector>

using namespace std;

vector<string> seperateWords(string str) {
	vector<string> words;
	string word = "";
	for (auto ch : str) {
		if (ch == ' ') {
			words.push_back(word);
			word = "";
		}
		else {
			word += ch;
		}
	}
	words.push_back(word);
	return words;
}

map<string, int> getWordCount(const vector<string>& wordList) {
	map<string, int> wordCount;

	for (auto const & word : wordList) {
		map<string, int> ::iterator it = wordCount.find(word);		
		if (it != wordCount.end())
			it->second++;
		else
			wordCount.insert({word, 1 });
	}

	return wordCount;
}

//int main() {
//	string str = "a quick brown fox jumped over the lazy dog";
//	for (auto j : getWordCount(seperateWords(str)))
//		cout << j.first << " appeared " << j.second << " times" << endl;
//	return 0;
//}