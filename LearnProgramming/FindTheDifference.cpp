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
			if (numberMap.find(i) == numberMap.end()) {
				result = i;
				break;
			}
			else if(numberMap[i] == 0){
				result = i;
				break;
			}
			else {
				numberMap[i]--;
			}
		}
		return result;
	}
};

//void main() {
//	string s = "abcd", t = "abcde";
//	FindTheDifference findTheDifferenceObject;
//	cout << findTheDifferenceObject.findTheDifference(s, t);
//}