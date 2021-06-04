#include<iostream>
#include<vector>
#include<fstream>
#include <string>
#include<map>

using namespace std;

class WordStats {
public:
	vector<string> vectorOfWords;

	vector<string> fileToVectorConverterFunc() {
		string line;
		ifstream inputFile("E:\inputTextFile.txt");

		if (inputFile.is_open()) {
			while (inputFile >> line) {
				vectorOfWords.push_back(line);
			}
			inputFile.close();
		}

		return vectorOfWords;
	}
	
	struct keyValue {
		string neighbourWord;
		int indexOfWord;
	};

	map<string, keyValue> graph;

	
};

void main() {
	vector<string> tempVector;
	WordStats wordStats;
	tempVector = wordStats.fileToVectorConverterFunc();
	for (auto it = tempVector.begin(); it != tempVector.end(); it++)
		cout << *it << "\n";
}