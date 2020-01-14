#include<iostream>
#include<string>
#include<vector>

using namespace std;

class AddBinary {
public:
	string addBinary(string a, string b) {
		int aLength = a.size() - 1;
		int bLength = b.size() - 1;
		string result;
		int carry = 0;
		while (true) {
			if (carry == 1) {
				if (a[aLength] == 0 && b[bLength] == 0) {
					result.push_back(1);
					aLength--, bLength--;
					carry = 1;
				}
				else if (a[aLength] == 0 && b[bLength] == 1) {
					result.push_back(0);
					aLength--, bLength--;
					carry = 1;
				}
				else if (a[aLength] == 1 && b[bLength] == 0) {
					result.push_back(0);
					aLength--, bLength--;
					carry = 1;
				}
				else if (a[aLength] == 1 && b[bLength] == 1) {
					result.push_back(1);
					aLength--, bLength--;
					carry = 1;
				}
				else if (a[aLength] == NULL && b[bLength] == 0) {
					result.push_back(1);
					aLength--, bLength--;
					carry = 0;
				}
				else if (a[aLength] == NULL && b[bLength] == 1) {
					result.push_back(0);
					aLength--, bLength--;
					carry = 1;
				}
				else if (a[aLength] == 0 && b[bLength] == NULL) {
					result.push_back(1);
					aLength--, bLength--;
					carry = 0;
				}
				else if (a[aLength] == 1 && b[bLength] == NULL) {
					result.push_back(0);
					aLength--, bLength--;
					carry = 1;
				}
			}
			else {
				if (a[aLength] == 0 && b[bLength] == 0) {
					result.push_back(0);
					aLength--, bLength--;
					carry = 0;
				}
				else if (a[aLength] == 0 && b[bLength] == 1) {
					result.push_back(1);
					aLength--, bLength--;
					carry = 0;
				}
				else if (a[aLength] == 1 && b[bLength] == 0) {
					result.push_back(1);
					aLength--, bLength--;
					carry = 0;
				}
				else if (a[aLength] == 1 && b[bLength] == 1) {
					result.push_back(0);
					aLength--, bLength--;
					carry = 1;
				}
				else if (a[aLength] == NULL && b[bLength] == 0) {
					result.push_back(0);
					aLength--, bLength--;
					carry = 0;
				}
				else if (a[aLength] == NULL && b[bLength] == 1) {
					result.push_back(1);
					aLength--, bLength--;
					carry = 0;
				}
				else if (a[aLength] == 0 && b[bLength] == NULL) {
					result.push_back(0);
					aLength--, bLength--;
					carry = 0;
				}
				else if (a[aLength] == 1 && b[bLength] == NULL) {
					result.push_back(1);
					aLength--, bLength--;
					carry = 0;
				}
			}
			if (aLength < 0 && bLength < 0) {
				break;
			}
		}
		return result;
	}
};

void main() {
	string a = "11", b = "1";
	AddBinary addBinary;
	cout << addBinary.addBinary(a, b);
}