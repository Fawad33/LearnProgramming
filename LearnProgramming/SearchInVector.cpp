#include<iostream>
#include<vector>

using namespace std;

bool search(vector<int> vec, int y){
	for (auto i = vec.begin(); i != vec.end(); i++){
		if (*i == y){
			return true;
		}
	}
	return false;
}

void main(){
	int x;
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	v.push_back(4);
	v.push_back(5);
	v.push_back(6);
	v.push_back(7);
	v.push_back(8);
	v.push_back(9);
	v.push_back(0);

	cout << "Enter the number you want to search: ";
	cin >> x;
	
	search(v, x);

	if (search(v, x) == true){
		cout << "Found" << endl;
	}
	else{
		cout << "Not Found" << endl;
	}
}