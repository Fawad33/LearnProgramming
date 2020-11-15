#include<iostream>

using namespace std;

class PowerOfFour {
public:
	bool isPowerOfFour(int num) {
		if (num <= 0)
			return false;
		int bitLength = floor(log2(num));
		if (bitLength % 2 == 0) {
			int count = 0;
			while (num > 0) {
				if ((num & 1) == 1) {
					count++;
				}
				num = num >> 1;
			}
			return (count == 1);
		}
		return false;
	}
};

void main() {
	int num = 1;
	PowerOfFour powerOfFour;
	cout << powerOfFour.isPowerOfFour(num);
}