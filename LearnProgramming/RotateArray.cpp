#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int> nums, int k) {
	int j = 0;
	vector<int> numsNew;
	int sizeNum = nums.size();

	if (sizeNum < k) {
		k = k % sizeNum;
	}

	for (int i = sizeNum - k; i < sizeNum; i++) {		
		numsNew.push_back(nums[i]);
	}

	for (int i = 0; i < sizeNum - k; i++) {
		numsNew.push_back(nums[i]);
	}

	cout << "[";
	for (auto i = numsNew.begin(); i != numsNew.end(); i++) {
		cout << *i << ",";
	}
	cout << "]";

}

//int main() {
//	int number;
//	cout << "Enter the number of k: ";
//	cin >> number;
//	vector<int> nums;
//	nums.push_back(5);
//	nums.push_back(6);
//	nums.push_back(7);
//	nums.push_back(8);
//	nums.push_back(9);
//	rotate(nums, number);
//}