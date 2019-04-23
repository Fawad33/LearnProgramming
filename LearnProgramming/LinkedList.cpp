#include<iostream>
using namespace std;

struct node {
	int info;
	node *link;
};

//int main() {
//	node *first;
//
//	first = (struct node*) malloc(sizeof(first));
//	first->info = 2;
//	first->link = NULL;
//
//	node *second = new node();
//	second->info = 5;
//	second->link = first;
//
//	node *third = new node();
//	third->info = 9;
//	third->link = second;
//
//	node *ptr = third;
//
//	while (ptr != NULL) {
//		cout << ptr->info << " ";
//		ptr = ptr->link;
//	}
//
//	return 0;
//}