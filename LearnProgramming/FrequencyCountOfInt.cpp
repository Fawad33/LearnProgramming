#include<iostream>
#include<vector>
#include<map>

using namespace std;

void frequencyCount(vector<int> v) {
	map<int, int> frequency;
	for (auto i = v.begin(); i != v.end(); i++) {
		std::map<int, int> ::iterator j;
		j = frequency.find(*i);
		if (j != frequency.end()) {
			j->second++;
		}
		else {
			frequency.insert({ *i, 1 });
		}
	}

	for (auto i = frequency.begin(); i != frequency.end(); i++)
		cout << i->first << " Occurred " << i->second << " times\n";
}

int main() {
	vector<int> v = {1, 2, 2, 3, 3, 3, 3, 5};
	frequencyCount(v);
}