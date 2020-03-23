#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BalancedBinaryTree {
public:
	int calculateResult(TreeNode* root) {
		if (root == NULL)
			return 0;
		int x = calculateResult(root->left);
		if (x == -1)
			return -1;
		int y = calculateResult(root->right);

		if (y == -1) 
			return -1;
		if (abs(x - y) > 1) 
			return -1;
		return max(x, y) + 1;
	}

	bool isBalanced(TreeNode* root) {
		int result = calculateResult(root);
		if (result == -1)
			return false;
		else
			return true;
	}
};

void main() {
	struct TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);

	BalancedBinaryTree balancedBinaryTreeObject;
	cout << balancedBinaryTreeObject.isBalanced(root);
}