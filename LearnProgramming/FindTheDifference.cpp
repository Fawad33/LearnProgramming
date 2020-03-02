#include<iostream>
#include<set>

using namespace std;

class FindTheDifference {
public:
	char findTheDifference(string s, string t) {
		char x = 'a';
		bool flag = true;
		set<char> charSet;		
		for (char i : t) {
			charSet.insert(i);
		}
		for (char i : s) {
			if (charSet.find(i) != charSet.end()) {
				charSet.erase(i);
			}
			else {
				x = i;
				flag = false;
				break;
			}
		}
		if (flag == true) {
			x = *charSet.begin();
		}
		return x;
	}
};

void main() {
	string s = "a", t = "aa";
	FindTheDifference findTheDifferenceObject;
	cout << findTheDifferenceObject.findTheDifference(s, t);
}