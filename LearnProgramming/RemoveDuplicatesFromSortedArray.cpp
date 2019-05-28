#include<iostream>
#include<vector>

using namespace std;

int removeDuplicates(vector<int>& nums) {
	auto f = nums.begin();
	if (f == nums.end())
		return 0;
	auto s = f + 1;
	if (s == nums.end())
		return nums.size();

	auto last = nums.end() - 1;
	while (true) {
		if (*f == *s) {
			if (s + 1 == nums.end()) {
				nums.erase(s);
				break;
			}
			else {
				nums.erase(s);
				s = f + 1;
			}
		}
		else {
			if (s + 1 == nums.end())
				break;
			else {
				s++, f++;
			}
		}
	}
	return nums.size();
}

//int main() {
//	vector<int> inputArray { 1, 1, 22, 22, 3, 3, 0 };
//	cout << removeDuplicates(inputArray);
//	return 0;
//}