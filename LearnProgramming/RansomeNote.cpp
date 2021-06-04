#include<iostream>
#include<map>

using namespace std;

class RansomeNote {
public:
	bool canConstruct(string ransomNote, string magazine) {
		map<char, int> hashmap;
		for (auto i : magazine) {
			if (hashmap.find(i) != hashmap.end())
				hashmap[i]++;
			else
				hashmap.insert({ i, 1 });
		}
		for (auto i : ransomNote) {
			if (hashmap.find(i) == hashmap.end())
				return false;
			else {				
				hashmap[i]--;
				if (hashmap[i] == 0) {
					hashmap.erase(i);
				}
			}
		}
		return true;
	}
};

//void main() {
//	string ransomNote = "aa";
//	string magazine = "ab";
//	RansomeNote ransomeNoteObject;
//	cout << ransomeNoteObject.canConstruct(ransomNote, magazine);
//}