#include<iostream>
#include<vector>
#include<string>

using namespace std;

class LongestCommonPrefix {
public:
	string longestCommonPrefix(vector<string>& strs) {
		string maxPrefix = *strs.begin();	
		string currentPrefix;
		for (auto it = strs.begin() + 1; it != strs.end(); it++) {
			for (int i = 0; i < maxPrefix.size(); i++) {
				if (maxPrefix[i] == *it[i]) {
					currentPrefix = "";
					currentPrefix.push_back[i];
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