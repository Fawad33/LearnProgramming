#include<iostream>
#include<vector>

using namespace std;

class SearchInsertPosition {
public:
	int searchInsert(vector<int>& nums, int target) {
		int x = 0;
		for (auto it = nums.begin(); it != nums.end(); it++){
			if (target <= *it) {
				x = distance(nums.begin(), it);
				break;
			}
			else
				x = (distance(nums.begin(), nums.end()));
		}
		return x;
	}
};

void main() {
	vector<int> nums = { 1,3,5,6 };
	int target = 7;
	SearchInsertPosition searchInsertPosition;
	cout << searchInsertPosition.searchInsert(nums, target);
}