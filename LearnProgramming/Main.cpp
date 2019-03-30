#include<iostream>

using namespace std;

extern int romanToInteger(string s);

int main() {

	string input;
	cout << "Enter a valid roman number: ";
	cin >> input;
	cout <<"Integer value of the string is: " << romanToInteger(input) << endl;


	return 0;
}