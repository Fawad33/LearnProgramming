#include<iostream>
#include<vector>
#include<map>

using namespace std;

class MajorityElements {
public:
	int majorityElement(vector<int>& nums) {
		map<int, int> resultMap;
		int result = 0;
		for (auto it = nums.begin(); it != nums.end(); it++) {
			if (resultMap.find(*it) != resultMap.end()) {
				resultMap[*it]++;
			}
			else {
				resultMap[*it] = 1;
			}

			if (resultMap[*it] > (nums.size() / 2)) {
				result = *it;
				break;
			}
		}
		return result;
	}
};

//void main() {
//	vector<int> input = { 6,5,5 };
//	MajorityElements majorityElementsObject;
//	cout << majorityElementsObject.majorityElement(input);
//}