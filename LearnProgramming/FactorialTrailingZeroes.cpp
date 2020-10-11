#include<iostream>

using namespace std;

class FactorialTrailingZeroes {
public:
	int trailingZeroes(int n) {
		int result = 0;

		if (n == 0)
			return result;

		while (n >= 5) {
			result += n / 5;
			n /= 5;
		}

		return result;
	}
};

//void main() {
//	int input = 13;
//	FactorialTrailingZeroes factorialTrailingZeroes;
//	cout << factorialTrailingZeroes.trailingZeroes(input);
//}