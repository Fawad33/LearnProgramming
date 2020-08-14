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
	void inverterFunction(TreeNode* left, TreeNode* right) {
		if (left != NULL && right != NULL) {
			int invert = left->val;
			left->val = right->val;
			right->val = invert;
		}
		else if (left == NULL && right == NULL)
			return;
		else if (left == NULL) {
			left->val = right->val;
			right->val = NULL;
		}
		else {
			right->val = left->val;
			left->val = NULL;
		}
		inverterFunction(left->left, right->right);
		inverterFunction(left->right, right->left);
	}

	TreeNode* invertTree(TreeNode* root) {
		if (root == NULL)
			return NULL;
		inverterFunction(root->left, root->right);
		return root;
	}
};

void main() {
	struct TreeNode* root = new TreeNode(4);
	root->left = new TreeNode(2);
	root->right = new TreeNode(7);
	root->left->left = new TreeNode(9);
	root->left->right = new TreeNode(6);
	root->right->left = new TreeNode(1);
	root->right->right = new TreeNode(1);
	InvertBinaryTree invertBinaryTree;
	invertBinaryTree.invertTree(root);
}