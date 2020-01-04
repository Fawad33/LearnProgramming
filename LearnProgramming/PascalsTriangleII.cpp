#include<iostream>
#include<vector>

using namespace std;

class PascalsTriangleII {
public:
	vector<int> getRow(int rowIndex) {
		vector<int> lastRow;
		if (rowIndex == 0)
			return lastRow;
		lastRow.push_back(1);

		for (int i = 1; i < rowIndex; i++) {
			vector<int> currentRow;
			for (int j = 0; j <= i; j++) {
				if (j - 1 < 0) {
					currentRow.push_back(lastRow[j]);
				}
				else if (j == i) {
					currentRow.push_back(lastRow[j - 1]);
				}
				else {
					currentRow.push_back(lastRow[j - 1] + lastRow[j]);
				}
			}
			lastRow = currentRow;
		}
		return lastRow;
	}
};

void main() {
	PascalsTriangleII pascalsTriangleII;
	vector<int> x = pascalsTriangleII.getRow(5);
	for (auto i = x.begin(); i != x.end(); i++) {
			cout << *i << " ";
	}	
}