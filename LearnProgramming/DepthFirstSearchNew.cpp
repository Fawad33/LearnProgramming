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
	void representGraph(vector<Edge> vectorOfEdges) {
		map<Node*, vector<Node*> adjacencyList> graph;
		map<Node*, Node*> :: iterator mapIterator;
		mapIterator = graph.find((Edge->x)->i);
		if (mapIterator != graph.end()) {
			*graph->second
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
	cout << (oneToFour->x)->i;
}