#include<iostream>
#include<vector>
#include<map>

using namespace std;

class ContainsDiplicate {
public:
	bool containsDuplicate(vector<int>& nums) {
		map<int, int> resultMap;
		bool result = false;
		for (auto i : nums) {
			if (resultMap.find(i) != resultMap.end()) {
				result = true;
				break;
			}
			else {
				resultMap[i] = 1;
			}
		}
		return result;
	}
};

void main() {
	vector<int> nums = { 1,2,3,1 };
	ContainsDiplicate containsDuplicateObject;
	cout << containsDuplicateObject.containsDuplicate(nums);
}