#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

//bool checkhappynumber1(int n, vector<int> v){
//	int sum = 0;	
//
//	if (n == 1){
//		return true;
//	}
//	
//	for (auto i = v.begin(); i != v.end(); i++){
//		if (*i == n){
//			return false; 
//		}
//	}
//
//	v.push_back(n);
//
//	while (n > 0){
//		sum += pow(n % 10, 2);
//		n = n / 10;
//	}
//
//	return checkhappynumber1(sum, v);
//
//}
//
//bool ishappy1(int n){
//	vector<int> v;
//	return checkhappynumber1(n, v);
//}

//void main(){
//	int num;
//	cout << "Enter a number: ";
//	cin >> num;
//	if (isHappy(num) == true){
//		cout << "True" << endl;
//	}
//	else{
//		cout << "False" << endl;
//	}
//}