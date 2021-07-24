#include<iostream>
#include<vector>
#include<fstream>
#include <string>
#include<map>

using namespace std;

struct stringAndCount {
	string neighbourWord;
	int countOfSameNeighbour;
};

class WordStats {
public:
	vector<string> vectorOfWords;
	int k = 3;
	string input = "banana";

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
	
	map<string, vector<stringAndCount>> graph;	

	void insertIntoGraph(string key, string word) {
		map<string, vector<stringAndCount>> :: iterator graphIterator;
		graphIterator = graph.find(key);
		bool flag = true;
		if (graphIterator != graph.end()) {
			for (auto jt = graphIterator->second.begin(); jt != graphIterator->second.end(); jt++) {
				if (word == jt->neighbourWord) {
					jt->countOfSameNeighbour++;
					flag = false;
				}								
			}
			if (flag != false) {
				stringAndCount valueToInsert = { word, 1 };
				graphIterator->second.push_back(valueToInsert);
			}
		}
		else {
			stringAndCount valueToInsertinGraph = { word, 1 };
			graph.insert({ key, {valueToInsertinGraph} });
		}
	}

	void convertVectorIntoMap(vector<string> vectorOfWords) {
		for (int i = 0; i < vectorOfWords.size(); i++) {
			if (k > i) {
				for (int j = 0; j < i; j++)
					insertIntoGraph(vectorOfWords[i], vectorOfWords[j]);
				for(int j = (i + 1); j <= (i + k); j++)
					insertIntoGraph(vectorOfWords[i], vectorOfWords[j]);
			}
			else {
				for (int j = (i - k); j < i; j++)
					insertIntoGraph(vectorOfWords[i], vectorOfWords[j]);
				for(int j = (i + 1); j < vectorOfWords.size(); j++)
					insertIntoGraph(vectorOfWords[i], vectorOfWords[j]);
			}
		}
	}

	vector<stringAndCount> neighbourSearch() {
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
	vector<stringAndCount> tempResult = wordStats.neighbourSearch();
	for (int i = 0; i < tempResult.size(); i++) {
		cout << tempResult[i].neighbourWord << " appeared " << tempResult[i].countOfSameNeighbour << " times.\n";
	}
}