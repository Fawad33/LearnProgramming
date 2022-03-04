#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

class MedianOfTwoSortedArrays {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        for (auto i = nums2.begin(); i != nums2.end(); i++) {
            nums1.push_back(*i);
        }
        sort(nums1.begin(), nums1.end());
        double result = 0;;
        int size = nums1.size();
        if (size % 2 == 0) {
            result = float(float(nums1[(size / 2) - 1] + nums1[size / 2])/2);
        }
        else {
            result = float(float(nums1[size / 2]));
        }
        return result;
    }
};

//void main() {
//    vector<int> nums1 = { 1,2 }, nums2 = { 3,4 };
//    MedianOfTwoSortedArrays medianOfTwoSortedArrays;
//    cout << medianOfTwoSortedArrays.findMedianSortedArrays(nums1, nums2);
//}