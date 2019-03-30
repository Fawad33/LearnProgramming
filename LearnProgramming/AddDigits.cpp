#include<iostream>

using namespace std;

int addDigits(int num) {
	int sum = 0;	
	while (num > 0){
		sum += num % 10;
		num = num / 10;
		}
		return sum;
}

//int main(){
//	int n;
//	cout << "enter a number: " << endl;
//	cin >> n;
//	cout << adddigits(n) << endl;
//
//	return 0;
//}

