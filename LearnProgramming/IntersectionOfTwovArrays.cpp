#include<iostream>
#include<vector>
#include<set>

using namespace std;

class InterSectionOfTwoArraysClass {
public:
	set<int> convertToSet(vector<int> nums) {
		set<int> numberSet;
		for (auto i : nums) {
			numberSet.insert(i);
		}
		return numberSet;
	}
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		set<int> nums1Set = convertToSet(nums1);
		set<int> nums2Set = convertToSet(nums2);
		vector<int> resultVector;
		for (auto i : nums1Set) {
			if (nums2Set.find(i) != nums2Set.end()) {
				resultVector.push_back(i);
			}
		}
		return resultVector;
	}
};

void main() {
	vector<int> nums1 = { 4,9,5 }, nums2 = { 9,4,9,8,4 }, result;
	InterSectionOfTwoArraysClass interSectionOfTwoArraysClassObject;
	result = interSectionOfTwoArraysClassObject.intersection(nums1, nums2);
	for (auto i : result)
		cout << i << " ";
}