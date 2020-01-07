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
			k++;
		}
		return k;
	}
};

int main() {
	string needle = "ll", haystack = "hello";
	ImplementStrStr implementStrStr;
	cout << implementStrStr.strStr(haystack, needle);
}