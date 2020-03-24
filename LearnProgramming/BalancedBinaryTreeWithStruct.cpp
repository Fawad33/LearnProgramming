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

struct calc {
	bool result = true;
	int height = 0;
};

class BalancedBinaryTeeWithStruct {
public:
	bool isBalanced(TreeNode* root) {
		if (root == NULL)
			return 0;
		calc x, y;
		x.height = isBalanced(root->left);
		if (x.result == false)
			return false;
		y.height = isBalanced(root->right);
		if (y.result == false)
			return false;
		if (abs(x.height - y.height) > 1)
			return false;
		return max(x.height, y.height) + 1;
	}
};

void main() {
	struct TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);

	BalancedBinaryTeeWithStruct balancedBinaryTeeWithStructObject;
	cout << balancedBinaryTeeWithStructObject.isBalanced(root);
}