#include<iostream>
#include<vector>

using namespace std;

class MergeSortedArray {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		int a = m + n - 1;
		n--, m--;
		while (n >= 0) {
			if (m < 0) {
				nums1[a] = nums2[n];
				n--, a--;
			}
			else {
				if (nums1[m] <= nums2[n]) {
					nums1[a] = nums2[n];
					n--, a--;
				}
				else {
					nums1[a] = nums1[m];
					m--, a--;
				}
			}
		}
		for (auto a = nums1.begin(); a != nums1.end(); a++)
			cout << *a << " ";
	}
};

//void main() {
//	vector<int> num1 = { 4, 5, 6, 0, 0, 0, 0, 0 };
//	vector<int> num2 = { 2, 3, 7, 8, 9 };
//	int m = 3, n = 5;
//	MergeSortedArray mergeSortedArrayObject;
//	mergeSortedArrayObject.merge(num1, m, num2, n);
//}