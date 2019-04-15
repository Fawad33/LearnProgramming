#include<iostream>
#include<vector>

using namespace std;

void rotate(int nums[], int k) {
	int numsNew[5];
	int size = sizeof(nums);

	for (int i = size - k; i <= size; i++) {
		int j = 0;
		numsNew[j] = nums[i];
		j++;
	}

	//int newSize = sizeof(numsNew);

	for (int i = k; i <= size; i++) {
		numsNew[k] = nums[i];
		k++;
	}

	for (int i = 0; i < 5; i++) {
		cout << numsNew[i] << " ";
	}

}

int main() {
	int number;
	int nums[5] = { 0, 1, 2, 3, 4 };
	cout << "Enter the number of k: ";
	cin >> number;	
	rotate(nums, number);
}