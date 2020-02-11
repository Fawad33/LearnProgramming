#include<iostream>
#include<vector>
#include<map>

using namespace std;

class SingleNumber {
public:
	int singleNumber(vector<int>& nums) {
		map<int, int> counter;
		for (auto i = nums.begin(); i != nums.end(); i++) {
			if (counter.find(*i) != counter.end()) {
				counter[*i]++;
			}
			else {
				counter.insert({*i, 1});
			}
		}
		for (auto j = counter.begin(); j != counter.end(); j++) {
			if (counter[*j] == 1) {
				return counter[*j];
			}
		}
	}
};

void main() {

}