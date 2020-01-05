#include<iostream>
#include<string>

using namespace std;

class ImplementStrStr {
public:
	int strStr(string haystack, string needle) {
		char* ptr;
		ptr = strstr(haystack,needle);
		cout << *ptr;
		return *ptr;
	}
};

int main() {
	string needle = "ll", haystack = "hello";
	ImplementStrStr implementStrStr;
	implementStrStr.strStr(haystack, needle);
}