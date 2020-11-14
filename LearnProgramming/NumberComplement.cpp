#include<iostream>

using namespace std;

class NumberComplement {
public:
	int findComplement(int num) {
		int bitLength = floor(log2(num)) + 1;
		int stringOfOnes = uint32_t(1 << bitLength) - 1;
		return num ^ stringOfOnes;
	}
};

void main() {
	int num = 2147483647;
	NumberComplement numberComplement;
	cout << numberComplement.findComplement(num);
}