#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
	int count = 0;
	if (nums.size() == 0)
		return 0;

	for (auto i = nums.begin(); i != nums.end(); i++) {
		if (*i == val)
			count++;
	}
	int x = 0;
	while(x < count) {
		for(auto i = nums.begin(); i != nums.end(); i++) {
			if (*i == val) {
				nums.erase(i);
				x++;
				break;
			}
		}
	}
	cout << nums.size();
	return nums.size();
}

int main() {
	vector<int> nums{ 0,1,2,2,3,0,4,2 };
	int value = 2;
	removeElement(nums, value);
	return 0;
}