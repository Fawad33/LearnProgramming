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
//class SymmetricTree {
//	public:
//	bool isSameTree(TreeNode* p, TreeNode* q) {
//		if (p == NULL && q == NULL) {
//			cout << "true";
//			return true;
//		}
//		if (p == NULL || q == NULL || p->val != q->val) {
//			cout << "false";
//			return false;
//		}
//		if (isSameTree(p->left, q->right) == false) {
//			cout << "false";
//			return false;
//		}
//		return isSameTree(p->right, q->left);
//	}
//
//	bool isSymmetric(TreeNode* root) {
//		if (root == NULL)
//			return true;
//		TreeNode* newRoot1 = root->left;
//		TreeNode* newRoot2 = root->right;
//		return isSameTree(newRoot1, newRoot2);
//	}
//};

//void main() {
//		struct TreeNode* root = new TreeNode(1);
//		root->left = new TreeNode(2);
//		root->right = new TreeNode(2);
//		root->left->left = new TreeNode(3);
//		root->left->right = new TreeNode(4);
//		root->right->left = new TreeNode(4);
//		root->right->right = new TreeNode(3);
//
//		SymmetricTree symmetricTree;
//		symmetricTree.isSymmetric(root);
//}