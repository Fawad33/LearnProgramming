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
	void representgraph(vector<Edge> vectorOfEdges) {
		vector<Edge*> adjacencyList;
		map<Node*, vector<Edge*>> graph;
		for (auto it = vectorOfEdges.begin(); it != vectorOfEdges.end(); it++) {
			auto mapIterator = graph.find(it->x->i);
			if (mapIterator != graph.end()) {
				adjacencyList.insert(mapIterator);
			}
			else {
				graph.insert(it, NULL);
			}
			mapIterator = 
		}
		
	}
};

void main() {
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
	auto w = four->i;
	cout << w;
}