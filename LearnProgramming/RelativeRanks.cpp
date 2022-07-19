#include<iostream>
#include<vector>
#include<queue>
#include<string>

using namespace std;

class RelativeRanks {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int, int>> heap;
        int size = score.size();
        for (int i = 0; i < size; i++) {
            heap.push({ score[i], i });
        }

        vector<string> answer(size, "GhorarDim");
        int i = 0;
        while (!heap.empty()) {
            int index = heap.top().second;
            heap.pop();

            if (i == 0)
                answer[index] = "Gold Medal";
            else if (i == 1)
                answer[index] = "Silver Medal";
            else if (i == 2)
                answer[index] = "Bronze Medal";
            else
                answer[index] = to_string(i + 1);
            i++;
        }

        return answer;
    }
};

//void main() {
//    vector<int> score = {5, 4, 3, 2, 1};
//    RelativeRanks relativeRanks;
//    vector<string> answer = relativeRanks.findRelativeRanks(score);
//    for (int i = 0; i < answer.size(); i++)
//        cout << answer[i] << " ";
//}