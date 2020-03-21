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
	int calculateHeight(TreeNode* root) {
		TreeNode* rightSubTree = root->right;
		TreeNode* leftSubTree = root->left;
		if (rightSubTree == NULL)
			return 0;		
		int rightMaxHeight = calculateHeight(rightSubTree) + 1;
		if (leftSubTree == NULL)
			return 0;
		int leftMaxHeight = calculateHeight(leftSubTree) + 1;
		if (rightMaxHeight < leftMaxHeight)
			return leftMaxHeight;
		else
			return rightMaxHeight;
	}

	int maxDepth(TreeNode* root) {
		if (root == NULL)
			return 0;
		else
			return calculateHeight(root) + 1;
	}
};

void main() {
	struct TreeNode* root = new TreeNode(1);
	root->right = new TreeNode(2);

	MaximumDepthOfBinaryTree maximumDepthOfBinaryTreeObject;
	cout << maximumDepthOfBinaryTreeObject.maxDepth(root);
}