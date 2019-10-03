#include<iostream>
#include<map>
#include<vector>
#include<cassert>

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

int main() {
	vector<int> happyInputs = { 1, 7, 10, 13, 19, 23, 28, 31, 32, 44, 49, 68, 70 };
	for (auto i : happyInputs){
		assert(isHappy(i) == true);
	}
}