#include<iostream>
#include<map>

using namespace std;

bool isHappy(int n) {
	map<int, int> numberMap;
	int sum = 0;
	if (n == 1)
		return true;

	while (n > 0) {
		sum += pow(n % 10, 2);
		n = n / 10;
	}

	auto it = numberMap.find(sum);
	if (it != numberMap.end())
		it->second++;
	else 
		auto temp = numberMap.insert({ sum, 1 });
	
	return isHappy(sum);
}

int main() {
	if (isHappy(17) == true)
		cout << "true";
	else
		cout << "false";
}