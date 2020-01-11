#include<iostream>
#include<vector>

using namespace std;

class TwoSumII {
public:
	vector<int> twoSumII(vector<int>& numbers, int target) {
		vector<int> numsNew;
		int size = numbers.size();
		int counter = 0;
		for (int i = 0; i < size; i++) {
			counter++;
			if (numbers[i] > target)
				break;
			for (int j = counter; j < size; j++) {
				if (numbers[j] > target || numbers[i] + numbers[j] > target)
					break;
				if (numbers[i] + numbers[j] == target) {
					numsNew.push_back(i + 1);
					numsNew.push_back(j + 1);
					break;
				}
			}
		}
		for (auto i = numsNew.begin(); i != numsNew.end(); i++)
			cout << *i << " ";
		return numsNew;
	}
};

void main(){
	vector<int> numbers = { 6, 1, 11, 15 };
	int target = 9;
	TwoSumII twoSumII;
	twoSumII.twoSumII(numbers, target);
}