//#include<iostream>
//#include<map>
//
//using namespace std;
//
//int main() {
//	map<int, char> firstMap;
//	firstMap.insert(pair<int, char>(1, 'a'));
//	firstMap.insert(pair<int, char>(2, 'b'));
//	firstMap.insert(pair<int, char>(3, 'c'));
//
//	for (auto i = firstMap.begin(); i != firstMap.end(); i++) {
//		cout << i->first << " " << i->second << endl;
//	}
//
//	cout << "Printing in reverse: " << endl;
//	for (auto i = firstMap.rbegin(); i != firstMap.rend(); i++) {
//		cout << i->first << " " << i->second << endl;
//	}
//
//	firstMap.erase(2);
//	cout << "After removing 2:" << endl;
//	for (auto i = firstMap.begin(); i != firstMap.end(); i++) {
//		cout << i->first << " " << i->second << endl;
//	}
//}