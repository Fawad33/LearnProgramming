#include<iostream>

using namespace std;

class CountPrimes {
public:
	int countPrimes(int n) {
		if (n == 0 || n == 1 || n == 2)
			return 0;
		int result = 1;
		for (int i = 3; i < n; i++) {
			bool flag = true;
			for (int j = 2; j * j <= i; j++) {
				if (i % j == 0) {
					flag = false;
					break;
				}
			}
			if (flag == true)
				result++;
		}
		return result;
	}
};

void main() {
	int n = 10;
	CountPrimes countPrimesObject;
	cout << countPrimesObject.countPrimes(n);
}