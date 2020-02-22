#include<iostream>
#include<vector>
#include<set>

using namespace std;

class ContainsDiplicate {
public:
	bool containsDuplicate(vector<int>& nums) {
		set<int> resultSet;
		bool result = false;
		for (auto i : nums) {
			if (resultSet.find(i) != resultSet.end()) {
				result = true;
				break;
			}
			else {
				resultSet.insert(i);
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