#include<iostream>
#include<vector>
#include<map>
#include<queue>

using namespace std;

class TopKFrequentElements {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int, int>> queue;
        map<int, int> counterMap;
        for (int i = 0; i < nums.size(); i++) {
            if (counterMap.find(nums[i]) != counterMap.end()) {
                counterMap[nums[i]]++;                
            }
            else {
                counterMap.insert({ nums[i], 1 });
            }
        }

        for (auto i = counterMap.begin(); i != counterMap.end(); i++) {
            queue.push({ i->second, i->first });
        }

        vector<int> result;
        for (int i = 0; i < k; i++) {
            result.push_back(queue.top().second);
            queue.pop();
        }

        return result;
    }
};

//void main() {
//    vector<int> nums = { 1,1,1,2,2,3 };
//    int k = 2;
//    TopKFrequentElements topKFrequentElements;
//    vector<int> result = topKFrequentElements.topKFrequent(nums, k);
//    for (int i = 0; i < k; i++) {
//        cout << result[i] << " ";
//    }
//}