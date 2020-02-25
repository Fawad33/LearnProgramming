#include<iostream>
#include<map>
#include<vector>
#include<string>

using namespace std;

class VerifyingAnAlienDictionary {
public:
	bool isAlienSorted(vector<string>& words, string order) {
		map<char, int> valueTable;
		bool result = true;
		int orderSize = order.size();
		for (int i = 0; i < orderSize; i++) {
			valueTable[order[i]] = i;
		}

		if (words.size() == 1) {
			return result;
		}
		else {
			for (int i = 0; i < words.size() - 1; i++) {
				bool breakFlag = true;
				for (int j = 0; j < words[i].size() && j < words[i + 1].size(); j++) {
					if (valueTable[words[i][j]] < valueTable[words[i + 1][j]]) {
						breakFlag = false;
						break;
					}
					else if (valueTable[words[i][j]] > valueTable[words[i + 1][j]]) {
						result = false;
						breakFlag = false;
						break;
					}

					if ((words[i].size() > words[i + 1].size()) && breakFlag == true) {
						result = false;
					}
				}

			}
		}
		return result;
	}
};

void main() {
	vector <string> words = { "hello","leetcode" };
	string order = "hlabcdefgijkmnopqrstuvwxyz";
	VerifyingAnAlienDictionary verifyingAnAlienDictionaryObject;
	cout << verifyingAnAlienDictionaryObject.isAlienSorted(words, order);
}