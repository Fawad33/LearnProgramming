#include<iostream>
#include<string>

using namespace std;

class DeciamlToBinary {
public:
	string decimalToBinary(int input) {
		string binary;
		while ((input / 2) >= 1) {
			int x = input % 2;
			input = input / 2;
			binary = to_string(x) + binary;		

			if ((input / 2) == 0 && (input % 2) == 1) {
				binary = "1" + binary;
			}
		}
		
		return binary;
	}
};

void main() {
	int input = 71;
	DeciamlToBinary deciamlToBinaryObject;
	cout << deciamlToBinaryObject.decimalToBinary(input);
}