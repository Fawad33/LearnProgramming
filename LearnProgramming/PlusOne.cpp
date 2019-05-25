#include<iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
	auto last = digits.end() - 1;
	*last = *last + 1;

	if (*last % 10 == 0) {
		int temp2 = *last;
		digits.erase(last);
		int temp = temp2 / 10;
		digits.push_back(temp);
		digits.push_back(temp2 % 10);
	}

	for (auto i = digits.begin(); i != digits.end(); i++)
		cout << *i << " ";

	return digits;
}

//int main() {
//	vector<int> inputArray{ 9,9};
//	plusOne(inputArray);
//}