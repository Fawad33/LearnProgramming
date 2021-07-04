#include<iostream>
#include<vector>
#include<fstream>
#include <string>
#include<map>

using namespace std;

class WordStats {
public:
	vector<string> vectorOfWords;
	int numberOfNeighbours = 3;
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
	
	struct keyValue {
		string neighbourWord;
		int indexOfWord;
	};

	map<string, vector<keyValue>> graph;

	void convertVectorToMap() {
		for (int i = 0; i < vectorOfWords.size(); i++) {
			if (graph.find(vectorOfWords[i]) == graph.end())
				graph.insert(vectorOfWords[i], {'a', 0}); // had to insert a value to enter the key into the map. looking for better approach

			if (i < numberOfNeighbours) {
				for (int x = 0; x <= i; x++) {
					graph[vectorOfWords[i]].push_back({ vectorOfWords[x], x });
				}
			}
		}
	}

	vector<keyValue> neighbourSearch() {
		/*for (int i = 0; i < graph.size(); i++) {
			if (graph.find(input) != graph.end()) {
				return graph[i];
			}
		}*/
		//need to find out how to work with this method
		auto it = graph.find(input);
		for (it = graph.begin(); it != graph.end(); it++) {
			if (it != graph.end())
				return it->second;
		}
	}

	vector<string> returnCount(vector<keyValue> neighbourWordsVector) {
		map<keyValue, int> counterMap;
		
		for (auto it = neighbourWordsVector.begin(); it != neighbourWordsVector.end(); it++) {
			auto mapIt = counterMap.find(it->neighbourWord);
			if (mapIt != counterMap.end()) {
				mapIt->
				mapIt->second++;
			}
			else {
				counterMap.insert({ mapIt, 1 });
			}
		}

		vector<string> output;
		for (auto it = counterMap.begin(); it != counterMap.end(); it++) {
			if (it->second >= ifMoreThanorEqual) {
				output.push_back(it->first);
			}
		}

		return output;
	}
};

void main() {
	vector<string> tempVector;
	WordStats wordStats;
	tempVector = wordStats.fileToVectorConverterFunc();
	for (auto it = tempVector.begin(); it != tempVector.end(); it++)
		cout << *it << "\n";
}