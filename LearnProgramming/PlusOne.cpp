#include<iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
	(*(digits.end() - 1))++;
	int last = (*(digits.end() - 1))++;

	if (last <= 10) {
		vector<int> temp;
		while (last > 0) {
			int remainder = last % 10;
			temp.push_back(remainder);
			last = last / 10;
		}
		reverse(temp.begin(),temp.end());
		digits.pop_back();
		for (auto i = temp.begin(); i != temp.end(); i++)
			digits.push_back(*i);
	}

	for (auto i = digits.begin(); i != digits.end(); i++)
		cout << *i << " ";
	return digits;
}

int main() {
	vector<int> inputArray{ 9,9};
	plusOne(inputArray);
}