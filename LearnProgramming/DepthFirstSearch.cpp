#include<iostream>
#include<vector>
#include<map>

using namespace std;

class DepthFirstSearch {

	void dfsVisit(int s, vector<int> v, map<int, int> parent) {
		for (auto i = v.begin(); i != v.end(); i++) {
			auto it = parent.find(*i);
			if (it == parent.end()) {
				parent.insert(s, *i);
				dfsVisit(*i, v, parent);
			}
		}
	}
	//how should i pass all the vectors?
	void dfs(vector<int> nodes, vector<int> v){
		map<int, int> parent;
		for (auto it = nodes.begin(); it != nodes.end(); it++) {
			auto it2 = parent.find(*it);
			if (it2 == parent.end()) {
				parent.insert(0, *it);
				dfsVisit(*it, v, parent);
			}
		}
	}
};

//void main() {
//	vector<int> v1 = { 2, 4 };
//	vector<int> v2 = { 5 };
//	vector<int> v3 = { 5,6 };
//	vector<int> v4 = { 2 };
//	vector<int> v5 = { 4 };
//	vector<int> v6 = { 6 };
//
//	vector<int> nodes = { 1, 2, 3, 4, 5, 6 };
//}