#include<iostream>
#include<string>

using namespace std;

class ValidPalindrome {
public:
	bool isPalindrome(string s){
		int length = s.length();
		int leftMax, rightMin;
		int i = 0, j = length - 1;
		while (true) {
			char lowerI = tolower(s[i]);
			char lowerJ = tolower(s[j]);
			while ((int(lowerI) <= 96 || int(lowerI) > 122)) {
				i++;
			}
			while ((int(lowerJ) <= 96 || int(lowerJ) > 122)) {
				j--;
			}
			
			if (lowerI == lowerJ)
				i++, j--;
			else
				return false;

			if (length % 2 == 0 && (j - i) == 1)
				return true;
			else if (length % 2 == 1 && (j - i) == 2)
				return true;
		}
	}
};

void main() {
	string input = "A man, a plan, a canal: Panama";
	ValidPalindrome validPalindrome;
	if (validPalindrome.isPalindrome(input) == true)
		cout << "true";
}