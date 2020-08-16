#include<iostream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class InvertBinaryTree {
public:
	TreeNode* invertTree(TreeNode* root) {
		if (root == NULL)
			return NULL;
		struct TreeNode* currentNode = root->left;
		root->left = root->right;
		root->right = currentNode;
		invertTree(root->left);
		invertTree(root->right);
		return root;
	}
};

//void main() {
//	struct TreeNode* root = new TreeNode(4);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(7);
//	root->left->left = new TreeNode(9);
//	root->left->right = new TreeNode(6);
//	root->right->left = new TreeNode(1);
//	root->right->right = new TreeNode(1);
//	InvertBinaryTree invertBinaryTree;
//	invertBinaryTree.invertTree(root);
//}