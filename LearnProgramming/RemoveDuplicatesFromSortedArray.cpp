#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int> nums) {
	int n = 0, x = 1;
	int* start, * temp;
	start = &nums[n];
	temp = &nums[x];
	int size = nums.size();

	while (nums[*temp] <= size) {
		if (*start == *temp) {
			nums.erase(*temp);
			x++;
		}
		n++;
	}

	int sizeNew = nums.size();
	return sizeNew;
}

int main() {
	vector<int> inputArray;
	inputArray = {1, 1, 22, 22, 3, 3, 0};
	for (int i = 0; i < 7; i++)
		cout << inputArray[i] << " ";
	cout << removeDuplicates(inputArray);
}