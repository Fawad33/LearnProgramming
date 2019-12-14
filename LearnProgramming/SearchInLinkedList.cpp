#include<iostream>
using namespace std;

//struct node {
//	int info;
//	node* link;
//};

//int main() {
//	node* first;
//	int item = 9;
//	node* loc;
//
//	first = (struct node*) malloc(sizeof(first));
//	first->info = 2;
//	first->link = NULL;
//
//	node* second = new node();
//	second->info = 5;
//	second->link = first;
//
//	node* third = new node();
//	third->info = 9;
//	third->link = second;
//
//	node* ptr = third;
//
//	while (ptr != NULL) {
//		if (item == ptr->info) {
//			cout << "Found!";
//			loc = ptr->link;
//			cout << loc;
//			//if this loop is not broken, it keeps printing found which i have ino idea why
//			break;
//		}
//		else {
//			ptr = ptr->link;
//		}		
//	}
//
//	if (ptr == NULL) {
//		cout << "Not Found!";
//		loc = NULL;
//		cout << loc;
//	}
//
//	return 0;
//}