#include<iostream>
#include<vector>

using namespace std;

class MedianOfTwoSortedArraysMethodTwo {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		vector<int> resultVector;
		int i = 0, j = 0;
		int loopSize = (nums1.size() + nums2.size()) / 2 + 1;
		while (i < nums1.size() && j < nums2.size()) {

			if (nums1[i] < nums2[j]) {
				resultVector.push_back(nums1[i]);
				if (i < nums1.size() - 1) {
					i++;
				}
				else {
					for (int x = j; x < loopSize - i - 1; x++) {
						resultVector.push_back(nums2[x]);
					}
					break;
				}
			}

			if (nums1[i] > nums2[j]) {
				resultVector.push_back(nums2[j]);
				if (j < nums2.size() - 1) {
					j++;
				}
				else {
					for (int y = i; y < loopSize - j - 1; y++) {
						resultVector.push_back(nums1[y]);
					}
					break;
				}
			}		
		}		

		if (loopSize % 2 == 0) {
			return double(resultVector[resultVector.size() - 1]);
		}
		else {
			double result = double(resultVector[resultVector.size() - 1] + resultVector[resultVector.size() - 2]);
			return result / 2;			
		}
	}
};

void main() {
	vector<int> m = { 1,3 }, n = { 2 };
	MedianOfTwoSortedArraysMethodTwo medianOfTwoSortedArraysMethodTwo;
	cout << medianOfTwoSortedArraysMethodTwo.findMedianSortedArrays(m, n);
}