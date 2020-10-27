#include<iostream>
#include<vector>

using namespace std;

class ReverseString {
public:
	void reverseString(vector<char>& s) {
		int size = s.size();
		char temp;
		if (size % 2 == 1) {
			for (int i = 0, j = size - 1; i < (size / 2); i++, j--) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
		else {
			for (int i = 0, j = size - 1; i < (size / 2); i++, j--) {
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			}
		}
	}
};

//void main() {
//	vector<char> s = { 'a','b','c','d','e', 'f' };
//	ReverseString reverseStringObject;
//	reverseStringObject.reverseString(s);
//	for (auto i : s)
//		cout << i;
//}