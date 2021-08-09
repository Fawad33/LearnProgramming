#include<iostream>
#include<vector>
#include<fstream>
#include <string>
#include<map>

using namespace std;

class WordStats {
public:
	vector<string> vectorOfWords;
	int k = 2;
	string input = "the";

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
	
	map<string, map<string, int>> graph;

	void insertIntoGraph(string key, string word) {
		bool flag = true;
		map<string, map<string, int>> :: iterator graphIterator;
		graphIterator = graph.find(key);		
		if (graphIterator != graph.end()) {
			map<string, int> ::iterator valueMapIterator;
			valueMapIterator = graphIterator->second.find(word);
			if (valueMapIterator != graphIterator->second.end()) {
				if (word == valueMapIterator->first) {
					valueMapIterator->second++;
					flag = false;
				}
			}
			if (flag == true)
				graphIterator->second.insert({ word, 1 });
		}
		else {
			map<string, int> insertValue = { {word, 1} };
			graph.insert({ key, insertValue });
		}	
	}

		void convertVectorIntoMap(vector<string> vectorOfWords) {
			for (int i = 0; i < vectorOfWords.size(); i++) {
				if (k > i) {
					for (int j = 0; j < i; j++)
						insertIntoGraph(vectorOfWords[i], vectorOfWords[j]);
					for (int j = (i + 1); j <= (i + k); j++)
						insertIntoGraph(vectorOfWords[i], vectorOfWords[j]);
				}
				else {
					for (int j = (i - k); j < i; j++)
						insertIntoGraph(vectorOfWords[i], vectorOfWords[j]);
					for (int j = (i + 1); j < (i + 1 + k) && j < vectorOfWords.size(); j++)
						insertIntoGraph(vectorOfWords[i], vectorOfWords[j]);
				}
			}
		}

		map<string, int> neighbourSearch() {
			auto it = graph.find(input);
			for (auto itGraph = graph.begin(); itGraph != graph.end(); itGraph++) {
				if (it == itGraph)
					return itGraph->second;
			}
		}
	};

void main() {
	vector<string> tempVector;
	WordStats wordStats;
	tempVector = wordStats.fileToVectorConverterFunc();
	wordStats.convertVectorIntoMap(tempVector);
	map<string, int> tempResult = wordStats.neighbourSearch();
	for (auto i = tempResult.begin(); i != tempResult.end(); i++) {
		cout << i->first << " appeared " << i->second << " times.\n";
	}
}