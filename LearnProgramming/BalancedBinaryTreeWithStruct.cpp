#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

//struct TreeNode {
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//struct TreeResult {
//	bool result;
//	int height;
//};
//
//class BalancedBinaryTeeWithStruct {
//public:
//	TreeResult findIsBalanced(TreeNode* root) {
//		TreeResult z;
//		if (root == NULL) {
//			z.height = 0;
//			z.result = true;
//			return z;
//		}
//
//		auto left = findIsBalanced(root->left);
//		if (left.result == false) {
//			return left;
//		}
//
//		auto right = findIsBalanced(root->right);
//		if (right.result == false) {
//			return right;
//		}
//
//		z.height = max(left.height, right.height) + 1;
//		if (abs(left.height - right.height) > 1) {
//			z.result = false;
//		}
//		else {
//			z.result = true;
//		}
//
//		return z;
//	}
//
//	bool isBalanced(TreeNode* root) {
//		return findIsBalanced(root).result;
//	}
//};

//void main() {
//	struct TreeNode* root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//	root->left->left = new TreeNode(4);
//	root->left->right = new TreeNode(5);
//
//	BalancedBinaryTeeWithStruct balancedBinaryTeeWithStructObject;
//	cout << balancedBinaryTeeWithStructObject.isBalanced(root);
//}