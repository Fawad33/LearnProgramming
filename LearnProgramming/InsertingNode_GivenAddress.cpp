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
//	int x = 0;
//	int val = 0;
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
//			node* traverse = new(node);
//			traverse = head;
//			while (traverse->next != nullptr) {
//				traverse = traverse->next;
//				x++;
//			}
//			traverse->next = temp;
//
//		}
//		val++;
//
//		if(val == )
//	}
//	return head;
//}
//
//void display(node* head) {
//	node* traverse = head;
//	while (traverse != nullptr) {
//		cout << traverse->data << "->";
//		traverse = traverse->next;
//	}
//}
//
//void append(node** ref, int new_data) {
//	struct node* new_node = new(node);
//	struct node* last = *ref;
//	new_node->data = new_data;
//	new_node->next = nullptr;
//	if (last == nullptr)
//		last = new_node;
//	while (last->next != nullptr)
//		last = last->next;
//	last->next = new_node;
//}
//
//void insertAfter(node* prev_node, int new_data) {
//	if (prev_node == nullptr)
//		cout << "Previous node cannot be NULL" << endl;
//	struct node* new_node = new(node);
//	new_node->data = new_data;
//	new_node->next = prev_node->next;
//	prev_node->next = new_node;
//}
//
//int main() {
//		int size = 0, new_data = 0, position = 0;
//		int* a = nullptr;
//		node* HEAD = nullptr;
//		cout << "Enter the size of the linked list: ";
//		cin >> size;
//		a = new int[size];
//		cout << "Enter the number of nodes: ";
//		for (int i = 0; i < size; i++) {
//			cin >> a[i];
//		}
//		HEAD = createLinkedList(a,size);
//		display(HEAD);
//		cout << "\nEnter the data of the new node: " << endl;
//		cin >> new_data;
//		/*cout << "Enter the number of node after which the new node is to be entered: " << endl;
//		cin >> position;*/
//		//insertAfter(HEAD->next, new_data);
//		append(&HEAD, new_data);
//		display(HEAD);
//		delete[] a;
//		return 0;
//}