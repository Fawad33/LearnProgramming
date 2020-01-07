#include<iostream>
#include<string>

using namespace std;

class ImplementStrStr {
public:
	string strStr(string haystack, string needle) {
		if (needle == "" && haystack == "")
			return 0;
		string answer;
		for (int i = 0; i < haystack.size() && i < needle.size(); i++) {
			if (haystack[i] == needle[i]) {
				answer.push_back(haystack[i]);
			}
			else {
				break;
			}
		}
		return answer;
	}
};

int main() {
	string needle = "apple", haystack = "app";
	ImplementStrStr implementStrStr;
	cout << implementStrStr.strStr(haystack, needle);
}