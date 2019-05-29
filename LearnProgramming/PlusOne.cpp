#include<iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
	long number = 0;
	for (auto i = digits.begin(); i != digits.end(); i++) {
		number = (*i) + number * 10;
	}
	if ((*(digits.end() - 1)) == 0) {
		number = number * 10;
	}
	number++;
	vector<int> temp;
	if (number > 10) {		
		while (number > 0) {
			long remainder = number % 10;
			temp.push_back(remainder);
			number = number / 10;
		}
		reverse(temp.begin(), temp.end());
	}
	digits.clear();
	for (auto i = temp.begin(); i != temp.end(); i++) {
		digits.push_back(*i);
	}
	for (auto i = digits.begin(); i != digits.end(); i++) {
		cout << *i << " ";
	}
	return digits;
}

int main() {
	vector<int> inputArray{9,8,7,6,5,4,3,2,1,0};
	plusOne(inputArray);
}