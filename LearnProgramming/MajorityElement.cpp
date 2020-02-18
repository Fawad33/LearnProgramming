#include<iostream>
#include<vector>
#include<map>

using namespace std;

class MajorityElements {
public:
	int majorityElement(vector<int>& nums) {
		map<int, int> resultMap;
		int val = 0, result = 0;
		for (auto it = nums.begin(); it != nums.end(); it++) {
			if (resultMap.find(*it) != resultMap.end()) {
				resultMap[*it]++;
			}
			else {
				resultMap.insert({*it, 1});
			}
			
			if (resultMap[*it] > val) {
				val = resultMap[*it];
				result = *it;
			}

			if (val > (nums.size() / 2)) {
				break;
			}
		}
		return result;
	}
};

void main() {
	vector<int> input = { 6,5,5 };
	MajorityElements majorityElementsObject;
	cout << majorityElementsObject.majorityElement(input);
}