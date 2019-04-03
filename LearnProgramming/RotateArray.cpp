#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int>& nums, int k) {
	vector<int> numsNew;
	for (auto i = 0; i < k; i++) {
		int temp = *nums.end();
		numsNew.push_back(temp);
		nums.pop_back();
	}

	for (auto i = nums.begin(); i < nums.end(); i++) {
		numsNew.push_back(*i);
	}
	
	for (auto i = numsNew.begin(); i < numsNew.end(); i++) {
		cout << *i;
	}
}

int main() {
	int number;
	vector<int> nums;
	cout << "Enter the number of k: ";
	cin >> number;
	for (int i = 0; i < 5; i++) {
		nums.push_back(i);
	}
	
	rotate(nums, number);
}