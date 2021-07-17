//#include<iostream>
//#include<algorithm>
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
//class MinimmumDepthOfBinaryTree {
//public:
//	int minDepth(TreeNode* root) {
//		if (root == NULL)
//			return 0;
//
//		if (root->left == NULL || root->right == NULL) 
//			return max(minDepth(root->left), minDepth(root->right)) + 1;
//		else
//			return min(minDepth(root->left), minDepth(root->right)) + 1;
//	}
//};

//void main() {
//	struct TreeNode* root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//	root->left->left = new TreeNode(4);
//	root->left->right = new TreeNode(5);
//
//	MinimmumDepthOfBinaryTree minimmumDepthOfBinaryTreeObject;
//	cout << minimmumDepthOfBinaryTreeObject.minDepth(root);
//}