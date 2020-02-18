#include<iostream>
#include<string>
#include<math.h>

using namespace std;

class ExcelSheetColumnNumber {
public:
	int titleToNumber(string s) {
		reverse(s.begin(), s.end());
		int value = 0, charValue = 0, counter = 0;
		for (auto it : s) {
			charValue = ((int)it) - 64;
			charValue = charValue * pow(26, counter);
			value += charValue;
			counter++;
		}
		return value;
	}
};

void main() {
	string s = "AA";
	ExcelSheetColumnNumber excelSheetColumnNumberObject;
	cout << excelSheetColumnNumberObject.titleToNumber(s);
}