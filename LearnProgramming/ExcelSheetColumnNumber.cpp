#include<iostream>
#include<string>
#include<math.h>

using namespace std;

class ExcelSheetColumnNumber {
public:
	int titleToNumber(string s) {
		reverse(s.begin(), s.end());
		int value = 0, charValue = 0, counter = 1; // for leetcode, counter needs to be declared as long, else it gets signed integer overflow runtime error
		for (auto i : s) {
			charValue = ((int)i) - 'A' + 1;
			charValue *= counter;
			value += charValue;
			counter *= 26;
		}
		return value;
	}
};

//void main() {
//	string s = "ZY";
//	ExcelSheetColumnNumber excelSheetColumnNumberObject;
//	cout << excelSheetColumnNumberObject.titleToNumber(s);
//}