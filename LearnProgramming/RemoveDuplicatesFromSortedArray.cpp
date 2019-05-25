#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int> inputArray) {
	auto f = inputArray.begin();
	if (f == inputArray.end())
		return 0;
	auto s = f + 1;
	if (s == inputArray.end())
		return 0;

	auto last = inputArray.end() - 1;
	for (auto a = inputArray.begin(); a != inputArray.end(); a++) {
		if (*f == *s) {
			if (s == last) {
				inputArray.erase(s);
				break;
			}
			else {
				inputArray.erase(s);
				s = f + 1;
			}
		}
		else{
			if (s == last)
				break;
			else {
				s + 1, f + 1;
			}
		}
		
	}
	return inputArray.size();
}

int main() {
	vector<int> inputArray { 1, 1, 22, 22, 3, 3, 0 };
	cout << removeDuplicates(inputArray);
	return 0;
}