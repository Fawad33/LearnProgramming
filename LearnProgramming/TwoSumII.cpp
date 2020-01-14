#include<iostream>
#include<vector>

using namespace std;

class TwoSumII {
public:
	vector<int> twoSumII(vector<int>& numbers, int target) {
		vector<int> numsNew;
		int size = numbers.size();
		for (int i = 0; i < size; i++) {
			for (int j = i + 1; j < size; j++) {
				if (numbers[i] + numbers[j] == target) {
					numsNew.push_back(i + 1);
					numsNew.push_back(j + 1);
					break;
				}
				if (numbers[i] + numbers[j] > target) {
					break;
				}
			}
		}
		for (auto i = numsNew.begin(); i != numsNew.end(); i++)
			cout << *i << " ";
		return numsNew;
	}
};

//void main(){
//	vector<int> numbers = { 3, 4, 6, 8, 15 };
//	int target = 10;
//	TwoSumII twoSumII;
//	twoSumII.twoSumII(numbers, target);
//}