#include<iostream>

using namespace std;

struct node {
	int info;
	node* link;
};

node* createLinkedList(int size) {
	node* head = NULL;
	node* temp = NULL;
	node* traverse = NULL;

	for (int i = 0; i < size; i++) {
		temp = (node*)malloc(sizeof(node));
		cout << "Enter the data of the node " << i + 1 << ": ";
		cin >> temp->info;
		temp->link = NULL;

		if (head == NULL) {
			head = temp;
		}
		else {
			traverse = head;
			while (traverse->link != NULL) {
				traverse = traverse->link;
			}
			traverse->link = temp;
		}
	}
	return head;
}

void displayLinkedList(node * head) {
	node* traverse = head;
	while (traverse != NULL) {
		cout << traverse->info << "->";
		traverse = traverse->link;
	}
}


int main() {
	int size;
	node* HEAD = NULL;
	cout << "enter the size of linked list: ";
	cin >> size;
	HEAD = createLinkedList(size);
	displayLinkedList(HEAD);
}