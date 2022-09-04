#include<iostream>
#include<queue>
#include<vector>

using namespace std;

class KthLargestElementInAnArray {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for (int i = 0; i < nums.size(); i++) {
            pq.push(nums[i]);
        }

        for (int i = 0; i < k - 1; i++) {
            pq.pop();
        }

        return pq.top();
    }
};

void main() {
    vector<int> nums = { 3,2,1,5,6,4 };
    KthLargestElementInAnArray kthLargestElementInAnArray;
    cout << kthLargestElementInAnArray.findKthLargest(nums, 2);
}