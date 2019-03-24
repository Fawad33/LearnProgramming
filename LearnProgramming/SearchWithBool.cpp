#include<iostream>

using namespace std;

bool search(int a, int arr[]){
	for (int i = 0; i < 10; i++){
		if (arr[i] == a){
			return true;
		}
	}

}
void main(){
	int x;
	int arra[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	cout << "Enter the number you want to search in the array: ";
	cin >> x;
	bool res = search(x, arra);
	if (res == true){
		cout << "Found" << endl;
	}
	else{
		cout << "Not found" << endl;
	}
}