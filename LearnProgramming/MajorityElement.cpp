#include<iostream>
#include<vector>
#include<map>

using namespace std;

class MajorityElements {
public:
	int majorityElement(vector<int>& nums) {
		map<int, int> resultMap;
		for (auto it = nums.begin(); it != nums.end(); it++) {
			if (resultMap.find(*it) != resultMap.end()) {
				resultMap[*it]++;
			}
			else {
				resultMap.insert({*it, 1});
			}
		}
		int val = 0, result = 0;
		for (auto it = resultMap.begin(); it != resultMap.end(); it++) {
			if (val < it->second) {
				val = it->second;
				result = it->first;
			}
		}
		return result;
	}
};

void main() {
	vector<int> input = { 2,2,1,1,1,2,2 };
	MajorityElements majorityElementsObject;
	cout << majorityElementsObject.majorityElement(input);
}