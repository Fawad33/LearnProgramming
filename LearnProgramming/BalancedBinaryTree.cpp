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
	bool calculateResult(TreeNode* root, int height) {
		if (root == NULL)
			return 0;

		int x = calculateResult(root->left, height) + 1;
		int y = calculateResult(root->right, height) + 1;
		if (x == -1)
			return -1;
		else if (x >= 0 && y == -1) 
			return -1;
		if (x - y > abs(1)) 
			return -1;
		else if ((x - y) <= abs(1))
			return max(x, y);
	}

	bool isBalanced(TreeNode* root) {
		int height = 0;
		return calculateResult(root, height);
	}
};

void main() {
	struct TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);

	BalancedBinaryTree balancedBinaryTreeObject;
	balancedBinaryTreeObject.isBalanced(root);
}