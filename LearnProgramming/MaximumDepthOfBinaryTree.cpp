#include<iostream>
#include<algorithm>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class MaximumDepthOfBinaryTree {
public:
	int maxDepth(TreeNode* root) {
		if (root == NULL)
			return 0;
		return max(maxDepth(root->right), maxDepth(root->left)) + 1;
	}
};

void main() {
	struct TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);

	MaximumDepthOfBinaryTree maximumDepthOfBinaryTreeObject;
	cout << maximumDepthOfBinaryTreeObject.maxDepth(root);
}