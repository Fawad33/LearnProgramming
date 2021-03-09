#include<iostream>

using namespace std;

class FibonacciNumber {
public:
	int fib(int n) {
		if (n <= 1) {
			return n;
		}
		return fib(n - 1) + fib(n - 2);
	}
};

//void main() {
//	FibonacciNumber fibonacciNumber;
//	cout << fibonacciNumber.fib(3);
//}