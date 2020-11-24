#include<iostream>

using namespace std;

class PowerOfFour {
public:
	bool isPowerOfFour(int num) {
		if (num <= 0)
			return false;		
		int count = 0, bitLength = 0;
		while (num > 0) {
			if ((num & 1) == 1) {
				count++;
			}
			num = num >> 1;
			bitLength++;
		}
		return (count == 1 && (bitLength % 2) == 1);
	}
};

void main() {
	int num = 16;
	PowerOfFour powerOfFour;
	cout << powerOfFour.isPowerOfFour(num);
}