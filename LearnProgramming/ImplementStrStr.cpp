#include<iostream>
#include<string>

using namespace std;

class ImplementStrStr {
public:
	int strStr(string haystack, string needle) {
		if (needle == "" && haystack == "")
			return 0;
		int i, k = 0;
		while (k < haystack.size()) {
			for (i = k; i < haystack.size(); i++) {
				for (int j = 0; j < haystack.size() && j < needle.size(); j++) {
					if (haystack[i] == needle[j]) {
						break;
					}
				}
			}
			k++;
		}
		return k;
	}
};

int main() {
	string needle = "apple", haystack = "app";
	ImplementStrStr implementStrStr;
	cout << implementStrStr.strStr(haystack, needle);
}