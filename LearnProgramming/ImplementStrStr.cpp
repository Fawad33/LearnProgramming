#include<iostream>
#include<string>

using namespace std;

class ImplementStrStr {
public:
	bool strStr(string haystack, string needle) {
		if (needle == "" && haystack == "")
			return false;
		int i;
		for (i = 0; i < haystack.size() && i < needle.size(); i++) {
			if (haystack[i] != needle[i]) {
				break;
			}
		}
		if (i == needle.size())
			return true;
		return false;
	}
};

int main() {
	string needle = "app", haystack = "apple";
	ImplementStrStr implementStrStr;
	cout << implementStrStr.strStr(haystack, needle);
}