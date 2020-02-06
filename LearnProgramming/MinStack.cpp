#include<iostream>
#include<vector>

using namespace std;

class MinStack {
public:
	vector<int> commonVector, minVector;
	MinStack() {
		
	}

	void push(int x) {
		commonVector.push_back(x);
		if (minVector.size() == 0) {
			minVector.push_back(x);
		}
		else {
			if (x < minVector.back()) {
				minVector.push_back(x);
			}
			else {
				minVector.push_back(minVector.back());
			}
		}
	}

	void pop() {
		commonVector.pop_back();
		minVector.pop_back();
	}

	int top() {
		return commonVector.back();
	}

	int getMin() {
		return minVector.back();
	}
};

void main() {
	MinStack minStackObject;
	minStackObject.push(1);
	minStackObject.push(2);
	minStackObject.pop();
	cout << minStackObject.top();
}