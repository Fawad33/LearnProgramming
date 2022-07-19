#include<iostream>
#include<vector>
#include<queue>

using namespace std;

class LastStoneWeight {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> queue;
        for (auto i = stones.begin(); i != stones.end(); i++)
            queue.push(*i);

        while (queue.size() > 1) {
            int large = queue.top();
            queue.pop();
            int small = queue.top();
            queue.pop();

            if(large != small)
                queue.push(large - small);
        }

        if (queue.empty())
            return 0;
        else
            return queue.top();
    }
};

void main() {
    vector<int> stones = { 1 };
    LastStoneWeight lastStoneWeight;
    cout << lastStoneWeight.lastStoneWeight(stones);
}