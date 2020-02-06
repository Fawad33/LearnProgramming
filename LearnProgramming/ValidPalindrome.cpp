#include<iostream>
#include<string>

using namespace std;

class ValidPalindrome {
public:
	bool isPalindrome(string s){
		int length = s.length();
		int i = 0, j = length - 1;
		bool palindrome = true;
		while (j > i) {
			while ((int(s[i]) < '0' || int(s[i]) > '9') && (int(tolower(s[i])) < 'a' || int(tolower(s[i])) > 'z') && i < j ) {
				i++;
			}
			while ((int(s[j]) < '0' || int(s[j]) > '9') && (int(tolower(s[j])) < 'a' || int(tolower(s[j])) > 'z')  && j > i) {
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

//void main() {
//	string input = "race a car";
//	ValidPalindrome validPalindrome;
//	if (validPalindrome.isPalindrome(input) == true)
//		cout << "true";
//}