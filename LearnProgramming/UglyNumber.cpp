#include<iostream>

using namespace std;

class UglyNumber {
public:
	bool isUgly(int num) {
		bool x = true; //in leetcode, it accepts uninitialized var. to keep the code running, it is initialized to true. for some cases this
		if (num == 1)// may return wrong result eg 14
			x = true;
		else if (num <= 0)
			x = false;
		else {
			if (num % 2 == 0)
				num = isUgly(num / 2);
			else if (num % 3 == 0)
				num = isUgly(num / 3);
			else if (num % 5 == 0)
				num = isUgly(num / 5);
			else
				x = false;
		}	
		return x;
	}
};

//void main() {
//	int num = 14;
//	UglyNumber uglyNumber;
//	cout << uglyNumber.isUgly(num);
//}