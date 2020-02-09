#include<iostream>

using namespace std;

class CountPrimes {
public:
	int countPrimes(int n) {
		int result = 0;
		for (int i = 0; i <= n; i++) {
			bool flag = false;
			for (int j = 2; j <= i; j++) {
				if (i % j == 0)
					break;
				else
					flag = true;				
			}			
			if (flag == true)
				result++;
		}
		return result;
	}
};

void main() {
	int n = 2;
	CountPrimes countPrimesObject;
	cout << countPrimesObject.countPrimes(n);
}