#include<iostream>

using namespace std;

class BinaryNumberWithAlternatingBits {
public:
	bool hasAlternatingBits(int n) {		
		int count = 0;
		while (n > 0) {
			int lastBit = (n & 1);
			n = n >> 1;
			if ((n & 1) == lastBit)
				return false;
		}
		return true;
	}
};

void main() {
	int n = 4;
	BinaryNumberWithAlternatingBits binaryNumberWithAlternatingBits;
	cout << binaryNumberWithAlternatingBits.hasAlternatingBits(n);
}