#include<iostream>
#include<vector>

using namespace std;

class PascalsTriangleII {
public:
	vector<int> getRow(int rowIndex) {
		vector<vector<int>> triangle;
		vector<int> x;

		if (rowIndex == 0)
			return x;

		vector<int> rowFirst = { 1 };
		triangle.push_back(rowFirst);

		for (int i = 1; i < rowIndex; i++) {
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

			if(i == rowIndex - 1)
				return row;

			triangle.push_back(row);
		}
	}
};

void main() {
	PascalsTriangleII pascalsTriangleII;
	vector<int> x = pascalsTriangleII.getRow(5);
	for (auto i = x.begin(); i != x.end(); i++) {
			cout << *i << " ";
	}	
}