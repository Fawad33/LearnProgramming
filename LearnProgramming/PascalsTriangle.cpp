#include<iostream>
#include<vector>

using namespace std;

class PascalsTriangle {
public:
	vector<vector<int>> generate(int numRows) {		
		vector<vector<int>> row;
		if (numRows == 0)
			return row;
		row[0].push_back(1);
		for (int i = 1; i < numRows; i++) {
			for (int j = 0; j <= i; j++) {
				if (row[i - 1][j - 1] == NULL || row[i - 1][j] == NULL) {
					row[i].push_back(1);
				}
				else {
					row[i].push_back(row[i - 1][j - 1] + row[i - 1][j]);
				}
			}
		}
		return row;
	}
};

void main() {
	PascalsTriangle pascalsTriangle;
	vector<vector<int>> x = pascalsTriangle.generate(3);
	for (auto i = 0; i < 3; i++) {
		for (auto j = x[i].begin(); j != x[i].end(); j++) {
			cout << *j << " ";
		}
	}
}