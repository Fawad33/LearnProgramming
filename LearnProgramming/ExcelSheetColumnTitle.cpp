#include<iostream>

using namespace std;

class ExcelSheetColumnTitle {
public:
	string convertToTitle(int n) {
		string result;
		if (n <= 26) {
			result += (char)(n + 64);
		}
		else if ((n / 26) > 1 && n % 26 == 0) {
			while ((n / 26) > 1) {
				int x = n % 26;
				n = (n / 26) - 1;
				if (n <= 26) {
					result += (char)(n + 64);
				}
				result += (char)(x + 64 + 26);
			}
		}
		else {
			while ((n / 26) >= 1) {				
				int x = n % 26;
				n = n / 26;
				if (n <= 26) {
					result += (char)(n + 64);
				}
				result += (char)(x + 64);
			}
		}
		return result;
	}
};

//void main() {
//	int n = 701;
//	ExcelSheetColumnTitle excelSheetColumnTitleObject;
//	cout << excelSheetColumnTitleObject.convertToTitle(n);
//}