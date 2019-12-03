#include<iostream>
#include<vector>
#include<map>

using namespace std;

struct Node {
	int i;
	Node(int x) : i(x) { }
};
struct Edge {
	struct Node* x;
	struct Node* y;
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
	struct Node* one = new Node(1);
	struct Node* two = new Node(2);
	struct Node* three = new Node(3);
	struct Node* four = new Node(4);
	struct Node* five = new Node(5);
	struct Node* six = new Node(6);

	struct Edge* oneToTwo = new Edge(one, two);
	struct Edge* oneToFour = new Edge(one, four);
	struct Edge* twoToFive = new Edge(two, five);
	struct Edge* threeToFive = new Edge(three, five);
	struct Edge* threeToSix = new Edge(three, six);
	struct Edge* fourToTwo = new Edge(four, two);
	struct Edge* fiveToFour = new Edge(five, four);
	struct Edge* sixToSix = new Edge(six, six);
	cout << (oneToFour->x)->i;
}