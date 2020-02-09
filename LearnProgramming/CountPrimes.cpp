#include<iostream>

using namespace std;

class CountPrimes {
public:
	int countPrimes(int n) {
		int result = 1;
		if (n == 2)
			return result;
		for (int i = 3; i <= n; i++) {
			bool flag = true;
			for (int j = 2; j <= sqrt(i); j++) {
				if (i % j == 0)
					flag = false;
					break;				
			}
			if (flag == true)
				result++;
		}
		return result;
	}
};

void main() {
	int n = 4;
	CountPrimes countPrimesObject;
	cout << countPrimesObject.countPrimes(n);
}