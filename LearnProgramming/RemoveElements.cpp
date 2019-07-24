#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
	if (nums.size() == 0)
		return 0;

	auto it = nums.begin();
	while (it != nums.end()) {
		if (*it == val) {
			it = nums.erase(it);
		}
		else {
			it++;
		}
	}

	cout << nums.size();
	return nums.size();
}

//int main() {
//	vector<int> nums{ 0,1,2,2,3,0,4,2 };
//	int value = 2;
//	removeElement(nums, value);
//	return 0;
//}