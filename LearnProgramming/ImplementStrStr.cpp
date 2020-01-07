#include<iostream>
#include<string>

using namespace std;

class ImplementStrStr {
public:
	int strStr(string haystack, string needle) {
		if (needle == "" && haystack == "")
			return 0;
		int j = 0;
		string answer;
		for (int i = 0; i < haystack.size(); i++) {
			while (j <= needle.size()) {
				if (haystack[i] == needle[j]) {
					answer.push_back(haystack[i]);
					j++;
				}
			}
		}
		if (answer.empty() == false)
			return answer;// to be change to the value of i
		else
			return -1;
	}
};

int main() {
	string needle = "ll", haystack = "hello";
	ImplementStrStr implementStrStr;
	cout << implementStrStr.strStr(haystack, needle);
}