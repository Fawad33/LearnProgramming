#include<iostream>
#include<vector>
#include<map>

using namespace std;

class SingleNumber {
public:
	int singleNumber(vector<int>& nums) {
		map<int, int> counter;
		int x = 0;
		for (auto i = nums.begin(); i != nums.end(); i++) {
			if (counter.find(*i) != counter.end()) {
				counter[*i]++;
			}
			else {
				counter.insert({*i, 1});
			}
		}
		for (auto j = counter.begin(); j != counter.end(); j++) {
			if (j->second == 1) {
				x = j->first;
				break;
			}
		}
		return x;
	}
};

//void main() {
//	vector<int> nums = { 4,1,2,1,2 };
//	SingleNumber singleNumberObject;
//	cout << singleNumberObject.singleNumber(nums);
//}