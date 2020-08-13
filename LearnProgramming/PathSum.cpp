#include<iostream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class PathSum {
public:
	bool helperFunctionOfPathSum(TreeNode* root, int sum, int temp) {
		if (root == NULL)
			return false;
		else
			temp += root->val;
		if (root->left == NULL) {
			if (root->right == NULL) {
				return sum == temp;
			}
			else{
				return helperFunctionOfPathSum(root->right, sum, temp);
			}
		}
		else {
			bool isFound = helperFunctionOfPathSum(root->left, sum, temp);
			if (isFound == true)
				return true;
			if (root->right != NULL)
				return helperFunctionOfPathSum(root->right, sum, temp);
			return false;
		}
	}

	bool hasPathSum(TreeNode* root, int sum) {
		int temp = 0;
		return helperFunctionOfPathSum(root, sum, temp);
	}
};

void main() {
	int sum = 22;
	struct TreeNode* root = new TreeNode(5);
	root->left = new TreeNode(4);
	root->right = new TreeNode(8);
	root->left->left = new TreeNode(11);
	root->left->left->left = new TreeNode(7);
	root->left->left->right = new TreeNode(2);
	root->right->left = new TreeNode(13);
	root->right->right = new TreeNode(4);
	root->right->right->right = new TreeNode(1);
	PathSum pathsum;
	cout << pathsum.hasPathSum(root, sum);
}