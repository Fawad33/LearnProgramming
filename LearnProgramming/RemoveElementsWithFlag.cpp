#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
	int i = 0;
	if (nums.size() == 0)
		return 0;
	bool flag = true;
	while (flag == true) {
		flag = false;
		for (auto i = nums.begin(); i < nums.end();) {
			if (*i == val) {
			nums.erase(i);
			flag = true;
			break;
			}
			else
				i++;
		}
	}
	cout << nums.size();
	return nums.size();
}

int main() {
	vector<int> nums{ 3,2,2,3 };
	int value = 3;
	removeElement(nums, value);
	return 0;
}