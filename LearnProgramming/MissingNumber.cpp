#include<iostream>
#include<vector>

using namespace std;

class MissingNumber {
public:
	int missingNumber(vector<int>& nums) {
		int sum = 0, iteratorSum = 0, count = 1;
		for (auto it = nums.begin(); it != nums.end(); it++) {
			iteratorSum += *it;
			sum += count;
			count++;
		}
		return (sum - iteratorSum);
	}
};

//void main() {
//	vector<int> nums = { 3,0,1 };
//	MissingNumber missingNumberObject;
//	cout << missingNumberObject.missingNumber(nums);
//}