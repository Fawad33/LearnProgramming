#include<iostream>
#include<vector>
#include<map>

using namespace std;

class ContainsDuplicateII {
public:
	bool containsNearbyDuplicate(vector<int>& nums, int k) {
		map<int, int> counterMap;
		for (int i = 0; i < nums.size(); i++) {
			if (counterMap.find(nums[i]) != counterMap.end()) {
				if (abs(i - counterMap[nums[i]]) <= k)
					return true;
				else
					counterMap[nums[i]] = i;
			}
			else {
				counterMap[nums[i]] =  i;
			}
		}
		return false;
	}
};

//void main() {
//	vector<int> nums = { 1,0,1,1 };
//	int k = 1;
//	ContainsDuplicateII containsDuplicateII;
//	cout << containsDuplicateII.containsNearbyDuplicate(nums, k);
//}