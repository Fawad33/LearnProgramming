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
		string currentPrefix = strs[0];
		for (int j = 1; j < strs.size(); j++) {
			string currentString = strs[j];
			currentPrefix = "";
			for (int i = 0; i < maxPrefix.size() && i < currentString.size(); i++) {				
				if (maxPrefix[i] == currentString[i]) {
					currentPrefix = currentPrefix + maxPrefix[i];
				}
				else
					break;
			}
			maxPrefix = currentPrefix;
		}
		return maxPrefix;
	}
};

//void main() {
//	vector<string> words = { "aca","cba"};
//	LongestCommonPrefix longestCommonPrefixObject;
//	cout << longestCommonPrefixObject.longestCommonPrefix(words);
//}