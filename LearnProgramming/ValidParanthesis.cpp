#include<iostream>
#include<string>
#include<stack>

using namespace std;

bool isValid(string paranthesis){
	stack<int> s;
	for (auto x : paranthesis){
		if (x == '(' || x == '{' || x == '['){
			s.push(x);
		}
		else{
			if (s.empty())
				return false;
			else if (x == ')'){
				if (s.top() == '('){
					s.pop();
				}
				else{
					return false;
				}
			}
			else if (x == '}'){
				if (s.top() == '{'){
					s.pop();
				}
				else{
					return false;
				}
			}
			else if (x == ']'){
				if (s.top() == '['){
					s.pop();
				}
				else{
					return false;
				}
			}
		}
	}

	return s.empty();

}

void main(){
	string paranthesis;
	cout << "enter a string of parenthesis: ";
	cin >> paranthesis;
	if (isValid(paranthesis)){
		cout << "true" << endl;
	}
	else{
		cout << "false" << endl;
	}
}