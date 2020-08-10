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
		bool x = false;
		temp += root->val;
		if (root->left == NULL) {
			if (root->right == NULL) {
				if (sum == temp) {
					x = true;
					return true;
				}
				else
					return false;
			}
			else{
				helperFunctionOfPathSum(root->right, sum, temp);
			}
		}
		else {
			if (x == true)
				return true;
			else if (root->right == NULL)
				helperFunctionOfPathSum(root->left, sum, temp);
			else
				helperFunctionOfPathSum(root->left, sum, temp);
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