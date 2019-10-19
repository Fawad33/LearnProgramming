#include<iostream>
#include<vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
	auto first = nums.begin();
	auto second = nums.begin() + 1;
	for (auto it = second; it != nums.end(); it++) {
		if ((*first + *it) == target) {
			cout << *first << " " << *second;
			break;
		}

		if (it == nums.end()) {
			first = nums.begin() + 1;
			it = nums.begin() + 2;
		}
	}
	return nums;
}

//void main() {
//	vector<int> numbers = { 6, 1, 2, 7, 11, 15 };
//	int target = 9;
//	twoSum(numbers, target);
//}