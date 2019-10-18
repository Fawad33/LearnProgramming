#include<iostream>
#include<map>
#include<cassert>
#include <set>

using namespace std;

bool determineIsHappy(int n, map<int, int> numberMap) {	
	int sum = 0;
	if (n == 1)
		return true;

	while (n > 0) {
		sum += pow(n % 10, 2);
		n = n / 10;
	}

	auto it = numberMap.find(sum);
	if (it != numberMap.end())
		return false;
	else 
		numberMap.insert({ sum, 1 });
	
	return determineIsHappy(sum,numberMap);
}

bool isHappy(int number) {	
	map<int, int> numberMap;
	return determineIsHappy(number, numberMap);
}

//int main() {
//	set<int> happyInputs = { 1, 7, 10, 13, 19, 23, 28, 31, 32, 44, 49, 68, 70 };
//	/*for (auto i : happyInputs){
//		assert(isHappy(i) == true);
//	}*/
//	for (int i = 1; i <= 100; i++) {
//		if (isHappy(i) == true) {
//			for (auto j : happyInputs)
//				if (j == i)
//					cout << "OK for " << i << endl;
//		}
//		else if(isHappy(i) == false) {
//			for (auto j : happyInputs)
//				if (j == i)
//					cout << "Not OK for " << i << endl;
//		}
//	}
//}