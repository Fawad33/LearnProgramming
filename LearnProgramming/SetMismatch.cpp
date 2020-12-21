#include<iostream>
#include<vector>
#include<map>

using namespace std;

class SetMismatch {
public:
	vector<int> findErrorNums(vector<int>& nums) {
		map<int, int> resultMap;
		vector<int> result;
		for (int i = 1; i <= nums.size(); i++) {
			resultMap.insert({ i, 0 });
		}
		for (int i = 0; i < nums.size(); i++) {
			if (resultMap.find(nums[i]) != resultMap.end()) {
				resultMap[nums[i]]++;
			}
		}
		for (int i = 1; i <= resultMap.size(); i++) {
			if (resultMap[i] == 2)
				result.push_back(i);
		}
		for (int i = 1; i <= resultMap.size(); i++) {
			if (resultMap[i] == 0)
				result.push_back(i);
		}
		return result;
	}
};

void main() {
	vector<int> nums = { 1,2,2,4 };
	SetMismatch setMismatch;
	vector<int> resultInMain = setMismatch.findErrorNums(nums);
	for (auto i : resultInMain)
		cout << i;
}