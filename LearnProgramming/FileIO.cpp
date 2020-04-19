#include<iostream>
#include<vector>
#include<fstream>
#include <string>

using namespace std;

void main() {
	vector<string> inputVector;
	string line;

	ifstream myfile("E:\estRead.txt");
	if (myfile.is_open()) {
		while (getline(myfile, line)) {
			inputVector.push_back(line);
			
		}
		myfile.close();
	}

	for (auto i = inputVector.begin(); i != inputVector.end(); i++) {
		cout << *i;
	}

	ofstream myfile2("E:\estwrite.txt");
	if (myfile2.is_open()) {
		for (auto i = inputVector.begin(); i != inputVector.end(); i++){
			myfile2 << *i << endl;
		}
		myfile2.close();
	}
}