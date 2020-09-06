#include<iostream>

using namespace std;

class UglyNumber {
public:
	bool isUgly(int num) {
		bool x = true;
		if (num == 1)
			return true;
		else if (num <= 0)
			return false;
		else {
			if (num % 2 == 0)
				num = isUgly(num / 2);
			else if (num % 3 == 0)
				num = isUgly(num / 3);
			else if (num % 5 == 0)
				num = isUgly(num / 5);
			else
				return false;
		}	
		return x;
	}
};

void main() {
	int num = 5;
	UglyNumber uglyNumber;
	cout << uglyNumber.isUgly(num);
}