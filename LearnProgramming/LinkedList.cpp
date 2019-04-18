#include<iostream>
using namespace std;

struct node {
	int info;
	node *link;
};

int main() {
	node *first;
	node *second;

	first = (struct node*) malloc(sizeof(first));
	first->info = 2;
	first->link = second;

	node *second = new node();
	second->info = 5;
	second->link = NULL;

	node *ptr = first;

	while (ptr != NULL) {
		cout << ptr->info << " ";
		ptr = ptr->link;
	}

	return 0;
}