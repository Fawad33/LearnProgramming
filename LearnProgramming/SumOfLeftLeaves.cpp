//#include<iostream>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//class SumOfLeftLeaves {
//public:
//	int sumOfLeftLeavesHelperFunc(TreeNode* root, bool flag, int result) {
//		if (root == NULL)
//			return result;
//		if (root->left == NULL && root->right == NULL && flag == true) {
//			result += root->val;
//		}
//		flag = true;
//		sumOfLeftLeavesHelperFunc(root->left, flag, result);
//		flag = false;
//		sumOfLeftLeavesHelperFunc(root->right, flag, result);
//		return result;
//	}
//
//	int sumOfLeftLeaves(TreeNode* root) {
//		bool flag = true;
//		int result = 0;
//		return sumOfLeftLeavesHelperFunc(root, flag, result);
//	}
//};

//void main() {
//	struct TreeNode* root = new TreeNode(3);
//	root->left = new TreeNode(9);
//	root->right = new TreeNode(20);
//	root->right->left = new TreeNode(15);
//	root->right->right = new TreeNode(7);
//
//	SumOfLeftLeaves sumOfLeftLeaves;
//	cout << sumOfLeftLeaves.sumOfLeftLeaves(root);
//}