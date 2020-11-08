#include<iostream>

using namespace std;

class ReverseBits {
public:
	uint32_t reverseBits(uint32_t n) {
		uint32_t reverseN = 0, x = 0;
		int i = 0;
		while (i < 32) {
			int x = n & 1;
			n = n >> 1;
			reverseN =  reverseN << 1;
			reverseN = reverseN | x;
			i++;
		}
		return reverseN;
	}
};

//void main() {
//	int n = 0B11111111111111111111111111111101;
//	ReverseBits reverseBitsobject;
//	cout << reverseBitsobject.reverseBits(n);
//}