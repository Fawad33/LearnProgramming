//#include<iostream>
//using namespace std;
//
//struct node {
//	int data;
//	node* next;
//};
//
//void main() {
//	int n, item;
//	node *first, *second, *list;
//	list = NULL;
//	cout << "Enter the number of nodes: ";
//	cin >> n;
//	cout << "\nEnter the data of nodes: ";
//
//	for (int i = 0; i <= n; i++) {
//		cin >> item;
//		first = new(node);
//		first->data = item;
//		first->next = NULL;
//
//		if (list == NULL) {
//			list = first;
//			second = first;
//		}
//		else {
//			second->next = first;
//			second = first;
//		}
//
//		second = list;
//
//		for (int i = 0; i < n; i++) {
//			cout << second->data;
//			second = second->next;
//			cout << " ";
//		}
//	}
//
//
//}