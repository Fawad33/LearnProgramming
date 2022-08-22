#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class MaxixmumProductOfTwoElements {
public:
    int maxProduct(vector<int>& nums) {
        priority_queue<int> queue;
        for (auto i = nums.begin(); i != nums.end(); i++) {
            queue.push(*i);
        }

        int var1 = queue.top();
        queue.pop();
        int var2 = queue.top();

        return (var1 - 1) * (var2 - 1);
    }
};

//void main() {
//    vector<int> nums = { 3,4,5,2 };
//    MaxixmumProductOfTwoElements maxixmumProductOfTwoElements;
//    cout << maxixmumProductOfTwoElements.maxProduct(nums);
//}