#include<iostream>
#include<map>

using namespace std;

class FindTheDifference {
public:
	char findTheDifference(string s, string t) {
		char result = 'a';
		map<char, int> numberMap;
		for (auto i : s) {
			if (numberMap.find(i) != numberMap.end()) {
				numberMap[i]++;
			}
			else {
				numberMap[i] = 1;
			}
		}
			
		for (auto i : t) {
			if (numberMap.find(i) != numberMap.end()) {
				numberMap[i]--;
			}
			else if(numberMap[i] == 0 || numberMap.find(i) == numberMap.end()){
				result = i;
				break;
			}
		}
		/*for (auto i = numberMap.begin(); i != numberMap.end(); i++) {
			if (i->second == 1) {
				result = i->first;
			}
		}*/
		return result;
	}
};

void main() {
	string s = "abcd", t = "abcde";
	FindTheDifference findTheDifferenceObject;
	cout << findTheDifferenceObject.findTheDifference(s, t);
}