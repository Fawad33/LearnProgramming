#include<iostream>
#include<cmath>

using namespace std;

class PowerOfTwoMethodTwo {
public:
	bool isPowerOfTwo(int n) {
		if ((n & 0B10000000000000000000000000000000) == 1) {
			bool flag = true;
			for (int i = 0; i < 32; i++) {
				if ((n & 1) == 1 && flag == false)
					return false;
				else if ((n & 1) == 0)
					n = n >> 1;
				else
					flag == false;
			}
			return true;
		}
		else {
			int count = 0;
			while (n > 0) {
				if ((n & 1) == 1) {
					count++;
				}
				n = n >> 1;
			}
			return (count == 1);
		}
	}
};

void main() {
	int n = -5;
	PowerOfTwoMethodTwo powerOfTwoMethodTwo;
	cout << powerOfTwoMethodTwo.isPowerOfTwo(n);
}