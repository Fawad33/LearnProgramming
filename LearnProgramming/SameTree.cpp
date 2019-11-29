#include<iostream>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class SameTree {
public:
	bool isSameTree(TreeNode* p, TreeNode* q) {
		if (p == NULL && q == NULL) {
			cout << "true";
			return true;
		}
		if (p == NULL || q == NULL || p->val != q->val) {
			cout << "false";
			return false;
		}
		if (isSameTree(p->left, q->left) == false) {
			cout << "false";
			return false;
		}
		return isSameTree(p->right, q->right);
	}
};

//void main() {
//	struct TreeNode* root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//
//	struct TreeNode* root2 = new TreeNode(1);
//	root2->left = new TreeNode(2);
//	root2->right = new TreeNode(3);
//
//	SameTree sameTree;
//	sameTree.isSameTree(root,root2);
//}