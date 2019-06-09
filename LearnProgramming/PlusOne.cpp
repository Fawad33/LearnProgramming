#include<iostream>
#include<vector>

using namespace std;

vector<int> plusOne(vector<int>& digits) {	
	reverse(digits.begin(), digits.end());
	(*(digits.begin()))++;
	int carry = 0;
	vector<int> temp;
	for (auto i = digits.begin(); i != digits.end(); i++) {
		if (*i == 10) {
			carry = 1;
			temp.push_back(0);
			if ((i + 1) != digits.end()) {
				(*(i + 1))++;
				carry--;
			}
			else {
				temp.push_back(1);
			}
		}
		else {
			temp.push_back(*i);
		}
	}
	reverse(temp.begin(), temp.end());
	for (auto i = temp.begin(); i != temp.end(); i++) {
		cout << *i << " ";
	}
	return temp;
}

//int main() {
//	vector<int> inputArray{9,9};
//	plusOne(inputArray);
//}