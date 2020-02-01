#include<iostream>
#include<string>
#include<map>

using namespace std;

class AddBinaryWithMap {
public:
	string addBinaryWithMapFunc(string a, string b) {
		char carry = '0';
		string result;
		int aIndex = a.size() - 1;
		int bIndex = b.size() - 1;
		map<string, string> resultTable = { {"001","10"}, {"011", "01"}, {"101", "01"},
		{"111", "11"}, {"000", "00"},{"010", "10"}, {"100","10"}, {"110", "01"} };
		
		while (true) {
			string keyString = "";
			if (aIndex < 0) {
				keyString += '0';
			}
			else {
				keyString += a[aIndex];
			}
			if(bIndex < 0) {
				keyString += '0';
			}
			else {
				keyString += b[bIndex];
			}

			keyString += carry;

			/*auto it = resultTable.find(keyString);
			result = it->second[0] + result;
			carry = it->second[1];*/
			result = resultTable[keyString][0] + result;
			carry = resultTable[keyString][1];

			aIndex--, bIndex--;
			if (aIndex < 0 && bIndex < 0) {
				if (carry == '1')
					result = '1' + result;
				break;
			}			
		}
		return result;
	}
};

//void main() {
//	string a = "1010", b = "1011";
//	AddBinaryWithMap addBinaryWithMap;
//	cout << addBinaryWithMap.addBinaryWithMapFunc(a, b);
//}