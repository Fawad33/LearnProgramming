#include<iostream>
#include<vector>

using namespace std;

class HeapSort {
public:
	void heapify(vector<int> & arr, int sizeOfArray, int i) {
		int largest = i;
		int left = 2 * i + 1;
		int right = 2 * i + 2;

		if (left < sizeOfArray && arr[left] > arr[largest])
			largest = left;
		if (right < sizeOfArray && arr[right] > arr[largest])
			largest = right;
		if (largest != i) {
			swap(arr[i], arr[largest]);
			heapify(arr, sizeOfArray, largest);
		}
	}

	void heapsort(vector<int> & arr, int sizeOfArray) {
		for (int i = sizeOfArray/2 - 1; i >= 0; i--) {
			heapify(arr, sizeOfArray, i);
		}
		for (int i = sizeOfArray - 1; i >= 0; i--) {
			swap(arr[0], arr[i]);
			heapify(arr, i, 0);
		}
	}

	void printArray(vector<int> arr, int sizeOfArray) {
		for (int i = 0; i < sizeOfArray; i++)
			cout << arr[i] << " ";
	}
};

void main() {
	vector<int> arr = { 1, 12, 9, 5, 6, 10 };
	int sizeOfArray = arr.size();
	HeapSort heapSort;
	heapSort.heapsort(arr, sizeOfArray);
	heapSort.printArray(arr, sizeOfArray);
}