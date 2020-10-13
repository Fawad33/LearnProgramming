#include<iostream>
#include<vector>

using namespace std;

class MoveZeroes {
public:
	void moveZeroes(vector<int>& nums) {
		int counter = 0;
		if (nums.size() > 1) {
			for (int i = 0; i < nums.size(); i++) {
				if (nums[i] == 0)
					counter++;
			}
			for (auto it = nums.begin(); it != nums.end(); it++) {
				if (*it == 0)
					it = nums.erase(it);
			}
			for (int i = 0; i < counter; i++)
				nums.push_back(0);
		}		
	}
};

void main() {
	vector<int> nums = { 0, 0 };
	MoveZeroes moveZeroesObject;
	moveZeroesObject.moveZeroes(nums);
	for (auto i : nums)
		cout << i << " ";
}