#include<iostream>

using namespace std;

class ReverseBitsLowCOmplexity {
public:
	uint32_t reverseBits(uint32_t n) {
		int left = 1, right = 2147483648, leftBit = 0, rightBit = 0;
		for (int i = 0; i < 16; i++) {
			leftBit = n & left;
			rightBit = n & right;
			leftBit = leftBit << (31 - i);
			n = n & leftBit;
			n = n | rightBit;
			left = left << 1;
			right = right >> 1;
		}
		return n;
	}
};

//void main() {
//	int n = 0B00000010100101000001111010011100;
//	ReverseBitsLowCOmplexity reverseBitsLowCOmplexity;
//	cout << reverseBitsLowCOmplexity.reverseBits(n);
//}