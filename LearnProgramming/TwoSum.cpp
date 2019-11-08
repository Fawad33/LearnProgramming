#include<iostream>
#include<vector>

using namespace std;

class TwoSum {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		vector<int> numsNew;
		int size = nums.size();
		int counter = 0;
		for (int i = 0; i < size; i++) {
			counter++;
			for (int j = counter; j < size; j++) {
				if (nums[i] + nums[j] == target) {
					cout << i << " " << j;
					numsNew.push_back(i);
					numsNew.push_back(j);
					break;
				}
			}			
		}
		return numsNew;
	}
};

int main() {
	vector<int> numbers = { 6, 1, 2, 7, 11, 15 };
	int target = 9;
	TwoSum twoSumObject;
	twoSumObject.twoSum(numbers, target);
}