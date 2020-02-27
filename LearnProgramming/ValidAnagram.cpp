#include<iostream>
#include<string>
#include<map>

using namespace std;

class ValidAnagram {
public:
	bool isAnagram(string s, string t) {
		map<char, int> sMap, tMap;
		bool result = true;
		if (s.size() != t.size()) {
			result = false;
			return result;
		}
		for (char i : s) {
			if (sMap.find(i) != sMap.end()) {
				sMap[i]++;
			}
			else {
				sMap[i] = 1;
			}
		}
		for (char i : t) {
			if (tMap.find(i) != tMap.end()) {
				tMap[i]++;
			}
			else {
				tMap[i] = 1;
			}
		}
		for (auto it1 = sMap.begin(); it1 != sMap.end(); it1++) {
			if (tMap.find(it1->first) == tMap.end() || tMap[it1->first] != it1->second) {
				result = false;
			}
		}
		return result;
	}
};

void main() {
	string s = "aacc", t = "ccac";
	ValidAnagram validAnagraamObject;
	cout << validAnagraamObject.isAnagram(s, t);
}