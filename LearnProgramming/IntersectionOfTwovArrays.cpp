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
	}
	vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
		set<int> nums1Set = convertToSet(nums1);
		set<int> nums2Set = convertToSet(nums2);
		
	}
};

//void main() {
//	vector<int> nums1 = { 1,2,2,1 }, nums2 = { 2,2 }, result;
//	InterSectionOfTwoArraysClass interSectionOfTwoArraysClassObject;
//	result = interSectionOfTwoArraysClassObject.intersection(nums1, nums2);
//}