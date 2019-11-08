#include<iostream>
#include<vector>

using namespace std;

class MergeSortedArray {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		auto pointer1 = nums1.begin(), pointer2 = nums2.begin();
		int i = 0;
		while (i < nums2.size()) {
			if (*pointer2 > *pointer1) {
				pointer1++;	
			}
			else {
				auto index = pointer1;				
				nums1.insert(nums1.begin() + distance(nums1.begin(), pointer1), *pointer2);
				pointer1 = index + 1;	
				pointer1++, pointer2++;
				i++;
			}
		}
		for (auto i = nums1.begin(); i != nums1.end(); i++)
			cout << *i << " ";
	}
};

//void main() {
//	vector<int> num1 = { 1, 2, 3, 0, 0, 0 };
//	vector<int> num2 = { 2, 4, 6 };
//	int m = 6, n = 3;
//	MergeSortedArray mergeSortedArrayObject;
//	mergeSortedArrayObject.merge(num1, m, num2, n);
//}