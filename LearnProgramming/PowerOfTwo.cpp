#include<iostream>

using namespace std;

class PowerOfTwo {
public:
	bool isPowerOfTwo(int n) {		
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
		return (count == 1);
	}
};

//void main() {
//	int n = 3;
//	PowerOfTwo powerOfTwo;
//	cout << powerOfTwo.isPowerOfTwo(n);
//}