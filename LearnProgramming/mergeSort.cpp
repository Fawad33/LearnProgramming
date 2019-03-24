#include<iostream>

using namespace std;
//
void merge(int a[], int p, int q, int r){
	int n1 = q - p + 1;
	int n2 = r - q;
	int *left = new int[n1 + 1];
	int *right = new int [n2 + 1];
	int i = 0;
	int j = 0;

	for (i = 0; i <= n1; i++)
		left[i] = a[p + i - 1];
	for (j = 0; j <= n2; j++)
		right[j] = a[q + j];

	left[n1] = 99999;
	right[n2] = 99999;

	i = 0;
	j = 0;
	for (int k = p; k <= r; k++){
		if (left[i] <= right[j]){
			a[k] = left[i];
			i++;
		}
		else{
			a[k] = right[j];
			j++;
		}
	}
}


void mergeSort(int a[], int p, int r){
	if (p < r){
		int q = (p + r) / 2;
		mergeSort(a, p, q);
		mergeSort(a, q + 1, r);
		merge(a, p, q, r);
	}
	return;
}


void main(){
	int a[] = { 1, 2, 3, 6, 5, 4 };
	mergeSort(a, 0, 5);
	for (int i = 0; i < 6; i++){
		printf("%d ", a[i]);
	}

}