#include<iostream>
#include<vector>

using namespace std;

int removeElement(vector<int>& nums, int val) {
	auto f = nums.begin();
	if (f == nums.end())
		return 0;
	auto s = f + 1;
	
	while (true) {
		if (*f == val) {
			nums.erase(f);
			s++;
			f = s - 1;
		}
		else if ((s + 1) == nums.end() && *s == val) {
			nums.erase(s);
			break;
		}
		else if (*f == val && s == nums.end()) {
			nums.erase(f);
			break;
		}
		else {
			s++, f++;
		}
	}
	cout << nums.size();
	return nums.size();
}

int main() {
	vector<int> nums{ 3,2,2,3 };
	int value = 3;
	removeElement(nums, value);
	return 0;
}