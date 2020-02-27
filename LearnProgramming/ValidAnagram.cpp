#include<iostream>
#include<string>
#include<map>

using namespace std;

class ValidAnagram {
public:
	map<char, int> createMapFromString(string s) {
		map<char, int> stringMap;
		for (char i : s) {
			if (stringMap.find(i) != stringMap.end()) {
				stringMap[i]++;
			}
			else {
				stringMap[i] = 1;
			}
		}
		return stringMap;
	}

	bool isAnagram(string s, string t) {
		map<char, int> sMap, tMap;
		bool result = true;
		if (s.size() != t.size()) {
			return false;
		}
		sMap = createMapFromString(s);
		tMap = createMapFromString(t);
		for (auto it1 = sMap.begin(); it1 != sMap.end(); it1++) {
			if (tMap.find(it1->first) == tMap.end() || tMap[it1->first] != it1->second) {
				result = false;
				break;				
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