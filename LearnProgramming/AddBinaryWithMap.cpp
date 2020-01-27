#include<iostream>
#include<string>
#include<map>

using namespace std;

class AddBinaryWithMap {
public:
	string addBinaryWithMapFunc(string a, string b) {
		char carry = '0';
		string resultReversed;
		int aLength = a.size() - 1;
		int bLength = b.size() - 1;
		map<string, string> resultTable = { {"001","10"}, {"011", "01"}, {"101", "01"},
		{"111", "11"}, {"000", "00"},{"010", "10"}, {"100","10"}, {"110", "01"} };
		
		while (true) {
			string tempStr;
			if (aLength < 0) {
				tempStr.push_back('0');
			}
			else {
				tempStr.push_back(a[aLength]);
			}
			if(bLength < 0) {
				tempStr.push_back('0');
			}
			else {
				tempStr.push_back(b[bLength]);
			}

			tempStr.push_back(carry);

			auto it = resultTable.find(tempStr);
			resultReversed.push_back(it->second[0]);
			carry = it->second[1];

			aLength--, bLength--;
			if (aLength < 0 && bLength < 0) {
				if (carry == '1')
					resultReversed.push_back('1');
				break;
			}			
		}
		string result;
		for (auto it = resultReversed.rbegin(); it != resultReversed.rend(); it++)
			result.push_back(*it);
		return result;
	}
};

void main() {
	string a = "1010", b = "1011";
	AddBinaryWithMap addBinaryWithMap;
	cout << addBinaryWithMap.addBinaryWithMapFunc(a, b);
}