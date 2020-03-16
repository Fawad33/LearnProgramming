#include<iostream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class SearchInABinarySearchTree {
public:
	TreeNode* searchBST(TreeNode* root, int val) {
		if (root == nullptr || root->val == val)
			return root;
		if (root->val > val)
			return searchBST(root->left, val);
		else 
			return searchBST(root->right, val);
	}
};

void main() {
	int val = 2;
	struct TreeNode* root = new TreeNode(4);
	root->left = new TreeNode(2);
	root->right = new TreeNode(7);
	root->left->left = new TreeNode(1);
	root->left->right = new TreeNode(3);
	SearchInABinarySearchTree searchInABinarySearchTreeObject;
	searchInABinarySearchTreeObject.searchBST(root, val);
}