#include<iostream>
#include<string>
#include<vector>

using namespace std;

class AddBinary {
public:
	string addBinary(string a, string b) {
		int aLength = a.size() - 1;
		int bLength = b.size() - 1;
		string resultReversed;
		char carry = '0';
		while (true) {
			if (carry == '1') {
				if ((aLength < 0 || a[aLength] == '0') && (b[bLength] == '0' || bLength < 0)) {
					resultReversed.push_back('1');
					carry = '0';
				}
				else if ((aLength < 0 || a[aLength] == '0') && b[bLength] == '1') {
					resultReversed.push_back('0');
				}
				else if (a[aLength] == '1' && (bLength < 0 || b[bLength] == '0')) {
					resultReversed.push_back('0');
				}
				else if (a[aLength] == '1' && b[bLength] == '1') {
					resultReversed.push_back('1');
				}
			}
			else {
				if ((aLength < 0 || a[aLength] == '0') && (b[bLength] == '0' || bLength < 0)) {
					resultReversed.push_back('0');
				}
				else if ((aLength < 0 || a[aLength] == '0') && b[bLength] == '1') {
					resultReversed.push_back('1');
				}
				else if (a[aLength] == '1' && (bLength < 0 || b[bLength] == '0')) {
					resultReversed.push_back('1');
				}				
				else if (a[aLength] == '1' && b[bLength] == '1') {
					resultReversed.push_back('0');
					carry = '1';
				}
			}
			aLength--, bLength--;

			if (aLength < 0 && bLength < 0) {
				if (carry == '1')
					resultReversed.push_back('1');
				break;
			}
		}
		string result;
		for (auto it = resultReversed.rbegin(); it != resultReversed.rend(); it++)
			result.push_back(*it);
		return result;
	}
};

void main() {
	string a = "101111", b = "10";
	AddBinary addBinary;
	cout << addBinary.addBinary(a, b);
}