#include<iostream>
#include<map>

using namespace std;

class IsomorphicString {
public:
	bool isIsomorphic(string s, string t) {
		if (s.size() != t.size())
			return false;
		map<char, char> sMap, tMap;
		for (int i = 0; i < s.size(); i++) {
			if (sMap.find(s[i]) == sMap.end())
				sMap.insert({ s[i], t[i] });
			if (tMap.find(t[i]) == tMap.end()) 
				tMap.insert({ t[i], s[i] });
			if (t[i] != sMap[s[i]] || s[i] != tMap[t[i]])
				return false;
		}
		return true;
	}
};

//void main() {
//	string s = "ab", t = "ca";
//	IsomorphicString isomorphicString;
//	cout << isomorphicString.isIsomorphic(s, t);
//}