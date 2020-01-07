#include<iostream>
#include<string>

using namespace std;

class ImplementStrStr {
public:
	int strStr(string haystack, string needle) {
		if (needle == "" && haystack == "")
			return 0;
		int i, j, k = 0;
		while (k < haystack.size()) {
			for (j = 0, i = k; i < haystack.size() && j < needle.size(); i++, j++) {
				if (haystack[i] != needle[j]) {
					break;
				}
			}
			if (j == needle.size()) {
				break;
			}
			k++;
		}
		if (haystack.size() == k)
			return -1;
		return k;
	}
};

int main() {
	string needle = "hello", haystack = "ll";
	ImplementStrStr implementStrStr;
	cout << implementStrStr.strStr(haystack, needle);
}