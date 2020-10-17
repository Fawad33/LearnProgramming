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
			int position = 0;
			for (int j = 0; j < nums.size(); j++) {
				if (nums[j] != 0) {
					nums[position] = nums[j];
					position++;
				}

			}
			for (int k = position; k < nums.size(); k++) {
				nums[position] = 0;
				position++;
			}				
		}		
	}
};

//void main() {
//	vector<int> nums = { 0,1,0,3,12 };
//	MoveZeroes moveZeroesObject;
//	moveZeroesObject.moveZeroes(nums);
//	for (auto i : nums)
//		cout << i << " ";
//}