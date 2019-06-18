#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
	if (nums.size() == 0)
		return 0;
	for (auto i = nums.begin(); i != nums.end(); i++) {
		if ((i + 1) == nums.end() && *i == val) {
			nums.erase(i);
			break;
		}
		else if (*i == val) {
			auto p = i + 1;
			nums.erase(i);
			i = p;
		}
	}
	cout << nums.size();
	return nums.size();
}

int main() {
	vector<int> nums{ 2,3,3,2 };
	int value = 3;
	removeElement(nums, value);
	return 0;
}