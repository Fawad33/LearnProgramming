#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class HappyNumberWithTwoFunctions {
public:
	bool checkHappyNumber2(int n, vector<int> v) {
		int sum = 0, ntemp = n;
		if (n == 1) {
			return true;
		}

		while (n > 0) {
			sum += pow(n % 10, 2);
			n = n / 10;
		}

		for (auto i = v.begin(); i != v.end(); i++) {
			if (*i == sum) {
				return false;
			}
		}

		v.push_back(ntemp);
		return checkHappyNumber2(sum, v);

	}
	bool isHappy2(int n) {
		vector<int> v;
		return checkHappyNumber2(n, v);
	}
};




//void main() {
//	int num;
//	HappyNumberWithTwoFunctions happyNumberWithTwoFunctions;
//	cout << "Enter a number: ";
//	cin >> num;
//	if (happyNumberWithTwoFunctions.isHappy2(num) == true) {
//		cout << "True" << endl;
//	}
//	else {
//		cout << "False" << endl;
//	}
//}