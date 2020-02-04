#include<iostream>
#include<string>

using namespace std;

class ValidPalindrome {
public:
	bool isPalindrome(string s){
		int length = s.length();
		int i = 0, j = length - 1;
		bool palindrome = true;
		while ((j - i) >= 1) {
			while ((int(tolower(s[i])) <= 96 || int(tolower(s[i])) > 122) && i < (length - 1)) {
				i++;
			}
			while ((int(tolower(s[j])) <= 96 || int(tolower(s[j])) > 122) && j < (length - 1)) {
				j--;
			}
			
			if (tolower(s[i]) == tolower(s[j]))
				i++, j--;
			else {
				palindrome = false;
				break;
			}
		}
		return palindrome;
	}
};

void main() {
	string input = ".,";
	ValidPalindrome validPalindrome;
	if (validPalindrome.isPalindrome(input) == true)
		cout << "true";
}