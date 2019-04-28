#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int> nums, int k) {
	int j = 0;
	vector<int> numsNew;
	int sizeNum = nums.size();

	for (int i = sizeNum - k; i < sizeNum - 1; i++) {		
		numsNew[j] = nums[i];
		j++;
	}

	for (int i = 0; i < sizeNum - k - 1; i++) {
		numsNew[k] = nums[i];
	}

	for (auto i = numsNew.begin(); i != numsNew.end(); i++) {
		cout << numsNew[*i] << " ";
	}

}

int main() {
	int number;
	cout << "Enter the number of k: ";
	cin >> number;
	vector<int> nums;
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);
	nums.push_back(8);
	nums.push_back(9);
	rotate(nums, number);
}