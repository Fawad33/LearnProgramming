#include<iostream>

using namespace std;

class PowerOfFour {
public:
	bool isPowerOfFour(int num) {
		if (num <= 0)
			return false;
		int bitLength = 0, numCopy = num;
		while (numCopy > 0) {
			numCopy = numCopy >> 1;
			bitLength++;
		}

		if ((bitLength - 1) % 2 == 0) {
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
	int num = 2;
	PowerOfFour powerOfFour;
	cout << powerOfFour.isPowerOfFour(num);
}