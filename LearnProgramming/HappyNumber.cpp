#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
vector<int> v;

bool isHappy(int n){
	int sum = 0, ntemp = n;	
	if (n == 1){
		return true;
	}
	while (n > 0){
		sum += pow(n % 10,2);
		n = n / 10;
	}

	v.push_back(ntemp);

	for (auto i = v.begin(); i != v.end(); i++){
		if (*i == sum){
			return false;
		}
		
	}
	return isHappy(n);
	
}


void main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (isHappy(num) == true){
		cout << "True";
	}
	else{
		cout << "False";
	}
}