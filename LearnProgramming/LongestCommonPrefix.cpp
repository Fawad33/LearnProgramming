#include<iostream>
#include<vector>
#include<string>

using namespace std;

class LongestCommonPrefix {
public:
	string longestCommonPrefix(vector<string>& strs) {
		if (strs.empty())
			return "";
		string maxPrefix = strs[0];
		string currentPrefix;
		for (int j = 1; j < strs.size(); j++) {
			string currentString = strs[j];
			currentPrefix = "";
			for (int i = 0; i < maxPrefix.size() && i < currentString.size(); i++) {				
				if (maxPrefix[i] == currentString[i]) {
					currentPrefix = currentPrefix + maxPrefix[i];
				}
			}
		}
		return currentPrefix;
	}
};

void main() {
	vector<string> words = { "cat", "cats", "co"};
	LongestCommonPrefix longestCommonPrefixObject;
	cout << longestCommonPrefixObject.longestCommonPrefix(words);
}