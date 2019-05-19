//#include<iostream>
//
//using namespace std;
//
//struct node {
//	int data;
//	node* next;
//};
//
//node* createLinkedList(int a[], int size) {
//	node* head = nullptr;
//	node* temp = nullptr;
//
//	for (int i = 0; i < size; i++) {
//		temp = new(node);
//		temp->data = a[i];
//		temp->next = nullptr;
//
//		if (head == nullptr) {
//			head = temp;
//		}else{
//			node* traverse = nullptr;
//			traverse = head;
//			while (traverse->next != nullptr) {
//				traverse = traverse->next;
//			}
//			traverse->next = temp;
//		}
//	}
//	return head;
//}
//
//void displayLinkedList(node* head) {
//	node* traverse = head;
//	while (traverse != nullptr) {
//		cout << traverse->data << "->";
//		traverse = traverse->next;
//	}
//}
//
//int main() {
//	int size = 0;
//	int* a = nullptr;
//	node* HEAD = nullptr;
//	cout << "Enter the size of the linked list: ";
//	cin >> size;
//	a = new int[size];
//	cout << "Enter the number of nodes: ";
//	for (int i = 0; i < size; i++) {
//		cin >> a[i];
//	}
//	HEAD = createLinkedList(a,size);
//	displayLinkedList(HEAD);
//	delete[] a;
//	return 0;
//}