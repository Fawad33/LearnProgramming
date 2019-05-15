#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int> inputArray) {
	int n = 0, x = 1;
	int* start, * temp;
	start = &inputArray[n];
	temp = &inputArray[x];
	int size = inputArray.size();

	while (x < size) {
		if (*start != *temp) {
			x++;
		}
		else {
			inputArray.erase(x);
			x++;
		}
		n++;
	}

	int sizeNew = inputArray.size();
	return sizeNew;
}

int main() {
	vector<int> inputArray;
	inputArray = {1, 1, 22, 22, 3, 3, 0};
	for (int i = 0; i < 7; i++)
		cout << inputArray[i] << " ";
	cout << removeDuplicates(inputArray);
}