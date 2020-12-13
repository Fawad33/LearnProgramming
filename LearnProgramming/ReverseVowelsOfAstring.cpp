#include<iostream>
#include<string>

using namespace std;

class ReverseVowelsOfAstring {
public:
	bool isVowel(char c) {
		if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
			return true;
		return false;
	}
	string reverseVowels(string s) {
		int i = 0, j = s.size() - 1;
		while (i < j) {
			if (isVowel(s[i]) == true && isVowel(s[j]) == true) {
				char temp = s[i];
				s[i] = s[j];
				s[j] = temp;
				i++, j--;
			}
			if (isVowel(s[i]) == false)
				i++;
			if (isVowel(s[j]) == false)
				j--;
		}
		return s;
	}
};

void main() {
	string s = "hello";
	ReverseVowelsOfAstring reverseVowelsOfAstring;
	cout << reverseVowelsOfAstring.reverseVowels(s);
}