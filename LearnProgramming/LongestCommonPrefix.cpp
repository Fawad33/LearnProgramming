#include<iostream>
#include<vector>
#include<string>

using namespace std;

class LongestCommonPrefix {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string word0 = strs[0], word1 = strs[1], word2 = strs[2], prefix = "";
		if (strs.empty()) {
			return "";
		}
		else if (word0 == "" || word1 == "" || word2 == "") {
			return "";
		}
		for (int i = 0; i < word0.size(); i++) {
			if (word0.at(i) == word1.at(i) && word1.at(i) == word2.at(i)) {
				prefix.push_back(word0.at(i));
			}
			else {
				return prefix;
			}
		}
		return prefix;
	}
};

//void main() {
//	vector<string> words = {"","floor","fl"};
//	LongestCommonPrefix longestCommonPrefixObject;
//	cout << longestCommonPrefixObject.longestCommonPrefix(words);
//}