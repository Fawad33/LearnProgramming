#include<iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {
	(*(digits.end() - 1))++;
	int carry = 0;
	
	reverse(digits.begin(), digits.end());
	int last = (*digits.begin());
	vector<int> temp;

	if (last == 10) {		
		for (auto i = digits.begin(); i != digits.end(); i++) {
			if (*i == 10) {
				temp.push_back(0);
				carry++;
			}
			else {
				temp.push_back(*i);
			}
			if (carry > 0) {
				(*(i + 1))++;
				carry--;
			}
		}
	}
	else {
		for (auto i = digits.begin(); i != digits.end(); i++) {
			temp.push_back(*i);
		}
	}
	reverse(temp.begin(), temp.end());
	for (auto i = temp.begin(); i != temp.end(); i++) {
		cout << *i << " ";
	}
	return temp;
}

int main() {
	vector<int> inputArray{8,9};
	plusOne(inputArray);
}