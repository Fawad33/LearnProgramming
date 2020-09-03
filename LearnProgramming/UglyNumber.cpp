#include<iostream>

using namespace std;

class UglyNumber {
public:
	bool isUgly(int num) {
		if (num == 1)
			return true;
		if (num <= 0)
			return false;
		for (int i = 2; i <= num / 2; i++) {
			if (num % i == 0) {
				if (i != 2) {
					if (i != 3) {
						if (i != 5)
							return false;
					}
				}
			}
		}
		return true;
	}
};

void main() {
	int num = 7;
	UglyNumber uglyNumber;
	cout << uglyNumber.isUgly(num);
}