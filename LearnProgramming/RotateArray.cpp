#include<iostream>
#include<vector>

using namespace std;

void rotate(vector<int> nums, int k) {
	int j = 0;
	vector<int> numsNew;
	int sizeNum = nums.size();

	if (sizeNum < k) {
		k = k % sizeNum;
	}

	for (int i = sizeNum - k; i < sizeNum; i++) {		
		numsNew.push_back(nums[i]);
	}

	for (int i = 0; i < sizeNum - k; i++) {
		numsNew.push_back(nums[i]);
	}

	for (int i = 0; i < sizeNum; i++) {
		nums.pop_back();
	}

	for (int i = 0; i < sizeNum; i++) {
		nums.push_back(numsNew[i]);
	}

	/*int count = 0;
	cout << "[";
	for (auto i : numsNew) {
		if (count == 0) {
			cout << i;		
		}
		else {
			cout << "," << i;
		}
		count++;
	}
	cout << "]";*/

}

int main() {
	int number;
	cout << "Enter the number of k: ";
	cin >> number;
	vector<int> nums;
	nums.push_back(1);
	nums.push_back(2);
	nums.push_back(3);
	nums.push_back(4);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(7);
	rotate(nums, number);
}