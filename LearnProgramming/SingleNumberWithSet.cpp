#include<iostream>
#include<vector>
#include<set>

using namespace std;

class SingleNumberWithSet {
public:
	int sigleNumberWithSet(vector<int> nums) {
		set<int> counterSet;
		for (auto i = nums.begin(); i != nums.end(); i++) {
			if (counterSet.find(*i) != counterSet.end()) {
				counterSet.erase(*i);
			}
			else {
				counterSet.insert(*i);
			}
		}
		int x = *counterSet.begin();
		return x;
	}
};

void main() {
	vector<int> nums = { 4,1,2,1,2 };
	SingleNumberWithSet singleNumberWithSetObject;
	cout << singleNumberWithSetObject.sigleNumberWithSet(nums);
}