#include<iostream>
#include<map>

using namespace std;

bool isHappy(int n, map<int, int>& numberMap) {
	int sum = 0;
	if (n == 1)
		return true;
	while (n > 0) {
		sum += pow(n % 10,2);
		n = n / 10;
	}
	auto i = numberMap.find(sum);
	if (i != numberMap.end())
		i->second++;
	else
		numberMap.insert({ i, 1 });
	if (i->second > 1)
		return false;
	isHappy(sum, numberMap);
}

int main() {
	map<int, int> numberMap;
	isHappy(10, numberMap);
	return 0;
}