#include<iostream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class TraverseTree {
public:
	void printPostOrder(struct TreeNode* node) {
		if (node == NULL)
			return;
		printPostOrder(node->left);
		printPostOrder(node->right);
		cout << node->val << " ";
	}

	void printPreOrder(struct TreeNode* node) {
		if (node == NULL)
			return;
		cout << node->val << " ";
		printPreOrder(node->left);
		printPreOrder(node->right);
	}

	void printInOrder(struct TreeNode* node) {
		if (node == NULL)
			return;
		printInOrder(node->left);
		cout << node->val << " ";
		printInOrder(node->right);
	}
};

//void main() {
//	struct TreeNode* root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//	root->left->left = new TreeNode(4);
//	root->left->right = new TreeNode(5);
//
//	TraverseTree traverseTreeObject;
//	cout << "printPreOrder traversal: ";
//	traverseTreeObject.printPreOrder(root);
//}