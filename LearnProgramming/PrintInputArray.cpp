#include<iostream>

using namespace std;

void printArray(int a[5]){
	cout << "You have entered: " << endl;
	for (int i = 0; i < 5; i++){
		cout << a[i] << " " << endl;
	}
}

//void main(){
//	int arr[5];
//	cout << "Enter 5 numbers: " << endl;
//	for (int i = 0; i < 5; i++){
//		cin >> arr[i];
//	}
//	printArray(arr);
//}
