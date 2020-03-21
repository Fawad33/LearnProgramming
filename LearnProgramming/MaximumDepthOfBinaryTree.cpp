#include<iostream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class MaximumDepthOfBinaryTree {
public:
	int calculateHeight(TreeNode* root, int &height) {
		if (root == NULL)
			return height;
		calculateHeight(root->left, height);
		calculateHeight(root->right, height);
	}

	int maxDepth(TreeNode* root) {
		int heightRight = 1, heightLeft = 1;
		TreeNode* rightSubTree = root->right;
		TreeNode* leftSubTree = root->left;
		int rightMaxHeight = calculateHeight(rightSubTree, heightRight);
		int leftMaxHeight = calculateHeight(leftSubTree, heightLeft);
		if (rightMaxHeight < leftMaxHeight)
			return leftMaxHeight;
		else
			return rightMaxHeight;
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