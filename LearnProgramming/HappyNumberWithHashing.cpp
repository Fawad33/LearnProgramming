#include<iostream>
#include<unordered_set>

using namespace std;

bool ishappy(int n) {
	unordered_set<int> newSet;
	int ntemp = n, sum = 0;
	if (n == 1) {
		return true;
	}

	while (n > 0) {
		sum += pow(n % 10, 2);
		n = n / 10;
	}
	newSet.insert(n);

	if (newSet.find(sum) != newSet.end()) {
		return false;
	}

	return ishappy(n);
}
void main(){
	int num;
	cout << "Enter a number: ";
	cin >> num;
	if (ishappy(num) == true){
		cout << "True";
	}
	else{
		cout << "False";
	}
}