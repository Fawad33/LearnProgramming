#include<iostream>
#include<vector>
#include<fstream>
#include <string>
#include<map>

using namespace std;

class WordStats {
public:
	struct stringAndCount {
		string neighbourWord;
		int countOfSameNeighbour;
	};

	vector<string> vectorOfWords;
	int k = 3;
	string input = "hello";
	int ifMoreThanorEqual = 3;

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

	void insertIntoGraph(string word) {
		for (int i = 0; i < vectorOfWords.size(); i++) {
			map<string, int> :: iterator graphIterator;
			graphIterator = graph.find(word);
			if (graphIterator != graph.end()) {
				for (int j = vectorOfWords[i].size(); j < vectorOfWords[i].size(), j++) {
					if (graphIterator == vectorOfWords[i].neighbourWord) {
						vectorOfWords[i].countOfSameNeighbour++;
					}						
					else {
						struct valueToInsert = { vectorOfWords[i], 0 };
						graph[j].push_back(&valueToInsert);
					}
						
				}
			}
			else {
				struct valueToInsertinGraph = { "a", 0 };
				graph.insert({ word, valueToInsertinGraph });
			}
		}
	}

	void convertVectorIntoMap(vector<string> vectorOfWords) {
		for (int i = 0; i < vectorOfWords.size(); i++) {
			if (k > i) {
				for (int j = 0; j < i; j++)
					insertIntoGraph(vectorOfWords[j]);
				for(int j = (i + 1); j <= (i + k); j++)
					insertIntoGraph(vectorOfWords[j]);
			}
			else {
				for (int j = (i - k); j < i; j++)
					insertIntoGraph(vectorOfWords[j]);
				for(int j = (i + 1); j < (i + k); j++)
					insertIntoGraph(vectorOfWords[j]);
			}
		}
	}

	vector<stringAndCount> neighbourSearch() {
		auto it = graph.find(input);
		for (auto itGraph = graph.begin(); itGraph != graph.end(); itGraph++) {
			if (it == itGraph)
				return graph[it];
		}
	}

	map<string, int> returnCount(vector<stringAndCount> neighbourWordsVector) {
		map<stringAndCount, int> counterMap;
		
		for (auto it = neighbourWordsVector.begin(); it != neighbourWordsVector.end(); it++) {
			auto mapIt = counterMap.find(it->neighbourWord);
			if (mapIt != counterMap.end()) {
				mapIt->second++;
			}
			else {
				counterMap.insert({ *mapIt->first, 1 });
			}
		}
		return counterMap;
	}
};

void main() {
	vector<string> tempVector;
	WordStats wordStats;
	tempVector = wordStats.fileToVectorConverterFunc();
	for (auto it = tempVector.begin(); it != tempVector.end(); it++)
		cout << *it << "\n";
}