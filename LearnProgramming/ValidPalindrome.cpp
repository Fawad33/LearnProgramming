#include<iostream>
#include<string>

using namespace std;

class ValidPalindrome {
public:
	bool isPalindrome(string s){
		int length = s.length();
		int i = 0, j = length - 1;
		bool palindrome = true;
		while ((j - i) > 3) {
			while (int(tolower(s[i])) <= 96 || int(tolower(s[i])) > 122) {
				i++;
			}
			while (int(tolower(s[j])) <= 96 || int(tolower(s[j])) > 122) {
				j--;
			}
			
			if (tolower(s[j]) == tolower(s[j]))
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
	string input = "race a car";
	ValidPalindrome validPalindrome;
	if (validPalindrome.isPalindrome(input) == true)
		cout << "true";
}