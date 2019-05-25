//#include<iostream>
//
//using namespace std;
//
//struct node {
//	int data;
//	node* next;
//};
//
//node* createlinkedlist(int a[], int size) {
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
//		}
//		else {
//			node* traverse = nullptr;
//			traverse = head;
//			while (traverse != nullptr)
//				traverse = traverse->next;
//			traverse->next = temp;
//		}
//	}
//	return head;
//}
//
//void displaylinkedlist(node* head) {
//	node* traverse = head;
//	while (traverse != nullptr) {
//		cout << traverse->data << "->";
//		traverse = traverse->next;
//	}
//}
//
//void push_node(node** head, int newnodedata) {
//	struct node* input_node = new(node);
//	input_node->data = newnodedata;
//	input_node->next = *head;
//	*head = input_node;
//}
//
//int main() {
//	int size = 0; 
//	int inputnode = 0;
//	int* a = nullptr;
//	node* head = nullptr;
//	cout << "enter the size of the linked list: ";
//	cin >> size;
//	a = new int[size];
//	cout << "enter the number of nodes: ";
//	for (int i = 0; i < size; i++) {
//		cin >> a[i];
//	}
//	head = createlinkedlist(a, size);
//	displaylinkedlist(head);
//	cout << "enter data for the new node which will be inserted in the starting of the list: ";	
//	cin >> inputnode;
//	push_node(&head, inputnode);
//	displaylinkedlist(head);
//	delete[] a;
//	return 0;
//}