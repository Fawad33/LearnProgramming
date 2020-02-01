#include<iostream>
#include<string>

using namespace std;

class ValidPalindrome {
public:
	bool isPalindrome(string s){
		int length = s.length();
		for (int i = 0; i < length; i++) {
			s[i] = tolower(s[i]);
		}
		int leftMax, rightMin;
		if (length % 2 == 0) {
			leftMax = length / 2;
			rightMin = leftMax + 1;
		}
		else {
			leftMax = (length / 2) - 1;
			rightMin = leftMax + 2;
		}
		for (int i = 0, j = length - 1; i <= leftMax, j >= rightMin; i++, j--) {
			if (int(s[i]) <= 96 || int(s[i]) > 122) {
				i++;
			}
			if (int(s[j]) <= 96 || int(s[j]) > 122) {
				j--;
			}
			if (s[i] != s[j])
				return false;
		}
		return true;
	}
};

void main() {
	string input = "A man, a plan, a canal: Panama";
	ValidPalindrome validPalindrome;
	if (validPalindrome.isPalindrome(input) == true)
		cout << "true";
}