#include<iostream>
#include<vector>

using namespace std;

class MergeSortedArray {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int i = 0, j = 0;
		while (j < n) {
			if (i >= nums1.size() && nums1[i] < nums2[j]) {
				auto it = nums1.begin();
				nums1.insert(it + i + 1, nums2[j]);
				i++, j++;
			}						
			else if (nums1[i] < nums2[j] && i + 1 < nums1.size()) {
				i++;
			}
			else {
				auto it = nums1.begin();
				nums1.insert(it + i +1, nums2[j]);
				i++, j++;
			}
		}
		for (auto i = nums1.begin(); i != nums1.end(); i++)
			cout << *i << " ";
	}
};

void main() {
	vector<int> num1 = { 1, 2, 3, 0, 0, 0};
	vector<int> num2 = { 2, 5, 6 };
	int m = 3, n = 3;
	MergeSortedArray mergeSortedArrayObject;
	mergeSortedArrayObject.merge(num1, m, num2, n);
}