#include<iostream>

using namespace std;

class NumberOfOneBits {
public:
	int hammingWeight(uint32_t n) {
		if (n < 0) {
			n *= -1;
		}
		int count = 0;
		while (n > 0) {
			if ((n & 1) == 1) {
				count++;
			}
			n = n >> 1;
		}
		return count;
	}
};

void main() {
	uint32_t n = 3;
	NumberOfOneBits numberOfOneBits;
	cout << numberOfOneBits.hammingWeight(n);
}