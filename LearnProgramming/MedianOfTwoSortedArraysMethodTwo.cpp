#include<iostream>
#include<vector>

using namespace std;

class MedianOfTwoSortedArraysMethodTwo {
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int loopSize = (nums1.size() + nums2.size()) / 2 + 1;
		int i = 0, j = 0, k = 0;
		vector<int> resultVector;
		while (k <= loopSize) {
			if (nums1[i] < nums2[j]) {
				resultVector.push_back(nums1[i]);
				i++;;
			}
			if(nums1[i] > nums2[j]) {
				resultVector.push_back(nums2[j]);
				j++;
			}
			int limit = loopSize - k - 1;
			if (i == nums1.size()) {
				for (int y = 0; y < limit; y++) {
					resultVector.push_back(nums2[j]);	
					j++;
				}
			}
			if(j == nums2.size()) {
				for (int x = 0; x < limit; x++) {
					resultVector.push_back(nums1[i]);
					i++;
				}
			}
			k++;
		}

		if (loopSize % 2 == 0) {
			int result = resultVector[resultVector.size() - 1] + resultVector[resultVector.size() - 2];
			return result / 2;
		}
		else {
			return resultVector[resultVector.size() - 1];
		}
	}
};

void main() {
	vector<int> m = { 1,2 }, n = { 3,4 };
	MedianOfTwoSortedArraysMethodTwo medianOfTwoSortedArraysMethodTwo;
	cout << medianOfTwoSortedArraysMethodTwo.findMedianSortedArrays(m, n);
}