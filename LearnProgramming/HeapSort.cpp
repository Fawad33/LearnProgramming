#include<iostream>

using namespace std;

class HeapSort {
public:
	void heapify(int arr[], int sizeOfArray, int i) {
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


};

void main() {
	
}