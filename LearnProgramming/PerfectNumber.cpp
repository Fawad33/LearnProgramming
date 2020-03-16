#include<iostream>

using namespace std;

class PerfectNumberClass {
public:
	bool isPerfectSquare(int num) {
		int sum = 0;
		bool result = true;
		if (num == 0)
			return false;
		for (int i = 1; i <= num / 2; i++) {
			if (num % i == 0) {
				sum += i;
			}
		}
		if (sum != num)
			result = false;
		return result;
	}
};

//void main() {
//	int num = 0;
//	PerfectNumberClass perfectNumberClassObject;
//	cout << perfectNumberClassObject.isPerfectSquare(num);
//}