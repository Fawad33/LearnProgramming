#include<iostream>
#include<string>

using namespace std;

class ImplementStrStr {
public:
	int strStr(string haystack, string needle) {
		if (needle == "" && haystack == "")
			return 0;
		for (int i = 0; i < haystack.size(); i++) {
			if (haystack.substr(i, needle.size()) == needle) {
				return i;
			}
		}
		return -1;
	}
};

int main() {
	string needle = "x", haystack = "hello";
	ImplementStrStr implementStrStr;
	cout << implementStrStr.strStr(haystack, needle);
}