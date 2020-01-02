#include<iostream>
#include<vector>
#include<string>

using namespace std;

class LongestCommonPrefix {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string maxPrefix = strs[0];
		string currentPrefix;
		for (int j = 1; j < strs.size(); j++) {
			currentPrefix = "";
			for (int i = 0; i < maxPrefix.size(); i++) {
				string tempString = strs[j];
				if (maxPrefix[i] == tempString[i]) {
					currentPrefix = currentPrefix + maxPrefix[i];
				}
			}
		}
		return currentPrefix;
	}
};

void main() {
	vector<string> words = {"cat", "car", "cow"};
	LongestCommonPrefix longestCommonPrefixObject;
	cout << longestCommonPrefixObject.longestCommonPrefix(words);
}