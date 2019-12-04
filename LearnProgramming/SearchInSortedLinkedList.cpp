#include<iostream>
using namespace std;

//struct node {
//	int info;
//	node* link;
//};

//int main() {
//	node* first;
//	int item = 6;
//	node* loc;
//
//	first = (struct node*) malloc(sizeof(first));
//	first->info = 9;
//	first->link = NULL;
//
//	node* second = new node();
//	second->info = 5;
//	second->link = first;
//
//	node* third = new node();
//	third->info = 2;
//	third->link = second;
//
//	node* ptr = third;
//
//	while (ptr != NULL) {
//		if (item < ptr->info) {
//			ptr = ptr->link;
//		}
//		else if (item == ptr->info) {
//			cout << "FOUND!" << endl;
//			loc = ptr ->link;
//			cout << loc;
//			//if this loop is not broken, it keeps printing found which i have ino idea why
//			break;
//		}
//		else {
//			cout << "Not Found!";
//			ptr ->link = NULL;
//			//if this loop is not broken, it keeps printing found which i have ino idea why
//			break;
//		}		
//	}
//
//	return 0;
//}