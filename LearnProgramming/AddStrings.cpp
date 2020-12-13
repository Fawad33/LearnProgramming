#include<iostream>
#include<string>

using namespace std;

class AddStrings {
public:
	string addStrings(string num1, string num2) {
		int carry = 0;
		if (num1.size() != num2.size()) {
			int difference = (num1.size() - num2.size());
			difference = abs(difference);
			string zeros = "";
			for (int i = 0; i < difference; i++)
				zeros.push_back('0');
			if (num1.size() > num2.size())
				num2.insert(0, zeros);
			else
				num1.insert(0, zeros);
		}
		string num1pop = "", num2pop = "", finalString = "";
		int addition = 0;
		for (int i = num1.size() - 1; i >= 0; i--) {
			num1pop = num1[i];
			num2pop = num2[i];
			addition = stoi(num1pop) + stoi(num2pop) + carry;
			if (addition >= 10) {
				carry = 1;
				addition %= 10;
			}				
			else
				carry = 0;
			finalString += to_string(addition);
		}
		if(carry == 1)
			finalString += to_string(carry);
		reverse(finalString.begin(), finalString.end());
		return finalString;
	}
};

//void main() {
//	string num1 = "1", num2 = "9";
//	AddStrings addStrings;
//	cout << addStrings.addStrings(num1, num2);
//}