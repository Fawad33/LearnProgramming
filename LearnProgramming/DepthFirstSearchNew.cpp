#include<iostream>
#include<vector>
#include<map>

using namespace std;

struct Node {
	int i;
	Node(int x) : i(x) { }
};
struct Edge {
	Node* x;
	Node* y;
	Edge(Node* x, Node* y) : x(x), y(y) {}
};

class DepthFirstSearchNew {
public:
	map<Node*, vector<Node*>> representGraph(vector<Edge*> vectorOfEdges) {
		map<Node*, vector<Node*>> graph;
		for (auto it = vectorOfEdges.begin(); it != vectorOfEdges.end(); it++) {
			auto mapIterator = graph.find((*it)->x);
			if (mapIterator != graph.end()) {
				graph[(*it)->x].push_back((*it)->y);
			}
			else {
				vector<Node*> newVector;
				graph[(*it)->x] = newVector;
				newVector.push_back((*it)->y);
			}

			mapIterator = graph.find((*it)->y);
			if (mapIterator != graph.end()) {
				graph[(*it)->y].push_back((*it)->x);
			}
			else {
				vector<Node*> newVector;
				graph[(*it)->y] = newVector;
				newVector.push_back((*it)->x);
			}
		}
		return graph;
	}

	vector<Node*> dfs(map<Node*, vector<Node*>> graphRepresentation, vector<Node*> vectorOfNodes, Node* startingNode, Node* targetNode) {
		map<Node*, string> coloredNodes;
		for (auto it = vectorOfNodes.begin(); it != vectorOfNodes.end(); it++) {
			coloredNodes.insert({ *it, "white" });
		}
		vector<Node*> path;
		/*for (auto it = coloredNodes.begin(); it != coloredNodes.end(); it++) {
			if (it->second == "white") {
				dfsVisit(graphRepresentation, coloredNodes, it->first, targetNode, path);
			}
		}*/
		dfsVisit(graphRepresentation, coloredNodes, startingNode, targetNode, path);
		return path;
	}

	bool dfsVisit(map<Node*, vector<Node*>> graphRepresentation, map<Node*, string> coloredNodes, Node* startingNode, Node* targetNode, vector<Node*> path) {
		map<Node*, string> ::iterator colorIterator;
		colorIterator = coloredNodes.find(startingNode);
		colorIterator->second = "grey";
		
		vector<Node*> pathLocal;
		if (path.empty() == false) {
			copy(path.begin(), path.end(), back_inserter(pathLocal));
		}		
		pathLocal.push_back(startingNode);
		map<Node*, vector<Node*>> ::iterator graphIterator;
		graphIterator = graphRepresentation.find(startingNode);
		for (auto it = graphIterator->second.begin(); it != graphIterator->second.end(); it++) {
			map<Node*, string> ::iterator changeNodeColor;
			changeNodeColor = coloredNodes.find(*it);
			if (changeNodeColor->second == "white") {				
				if (*it != targetNode) {
					dfsVisit(graphRepresentation, coloredNodes, *it, targetNode, pathLocal);
				}
				else {
					return true;
				}
			}
		}
		colorIterator->second = "black";
		return false;
	}
};

int main() {
	Node* one = new Node(1);
	Node* two = new Node(2);
	Node* three = new Node(3);
	Node* four = new Node(4);
	Node* five = new Node(5);
	Node* six = new Node(6);

	Edge* oneToTwo = new Edge(one, two);
	Edge* oneToFour = new Edge(one, four);
	Edge* twoToFive = new Edge(two, five);
	Edge* threeToFive = new Edge(three, five);
	Edge* threeToSix = new Edge(three, six);
	Edge* fourToTwo = new Edge(four, two);
	Edge* fiveToFour = new Edge(five, four);
	Edge* sixToSix = new Edge(six, six);

	vector<Edge*> vectorOfEdges = { oneToTwo , oneToFour , twoToFive , threeToFive , threeToSix ,fourToTwo , fiveToFour , sixToSix };
	DepthFirstSearchNew depthFirstSearchNew;
	map<Node*, vector<Node*>> graphRepresentation = depthFirstSearchNew.representGraph(vectorOfEdges);
	vector<Node*> vectorOfNodes = { one, two, three, four, five, six };
	vector<Node*> x = depthFirstSearchNew.dfs(graphRepresentation, vectorOfNodes, one, three);
	for (auto i = x.begin(); i != x.end(); i++) {
		cout << (*i)->i << endl;
	}
}