#include<iostream>
#include<vector>

using namespace std;

class PascalsTriangle {
public:
	vector<vector<int>> generate(int numRows) {		
		vector<vector<int>> triangle;
		if (numRows == 0)
			return triangle;		
		vector<int> rowFirst = {1};
		triangle.push_back(rowFirst);
		for (int i = 1; i < numRows; i++) {
			vector<int> row;
			for (int j = 0; j <= i; j++) {
				if (j - 1 < 0) {
					row.push_back(triangle[i - 1][j]);
				}
				else if (j == i) {
					row.push_back(triangle[i - 1][j - 1]);
				}
				else {
					row.push_back(triangle[i - 1][j - 1] + triangle[i - 1][j]);
				}
			}
			triangle.push_back(row);
		}
		return triangle;
	}
};

void main() {
	PascalsTriangle pascalsTriangle;
	vector<vector<int>> x = pascalsTriangle.generate(3);
	for (auto i = 0; i < 3; i++) {
		for (auto j = x[i].begin(); j != x[i].end(); j++) {
			cout << *j << " ";
		}
		cout << endl;
	}
}