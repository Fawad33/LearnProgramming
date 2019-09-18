#include<iostream>
#include<map>
#include<string>

using namespace std;

void frequencyCountOfChar(string str) {
	map<char, int> characterMap;
	for (auto stringIterator = str.begin(); stringIterator != str.end(); stringIterator++) {
		map<char, int>::iterator mapIterator;
		mapIterator = characterMap.find(*stringIterator);
		if (mapIterator != characterMap.end())
			mapIterator->second++;
		else
			characterMap.insert({*stringIterator, 1});
	}

	for (auto i = characterMap.begin(); i != characterMap.end(); i++)
		cout << i->first << " occurred " << i->second << " times\n";
}

//int main() {
//	string str = "aaaaabcddddddddd";
//	frequencyCountOfChar(str);
//	return 0;
//}