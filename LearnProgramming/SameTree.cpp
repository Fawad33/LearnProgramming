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
		TreeNode* current1 = p;
		TreeNode* current2 = q;
		if (current1 != current2 || current1->left != current2->left || current1->right != current2->right)
			cout << "false";
			return false;
		if (p == NULL && q == NULL)
			return;
		isSameTree(p->left, q->left);		
		isSameTree(p->right, q->right);
	}
};

void main() {
	struct TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);

	struct TreeNode* root2 = new TreeNode(1);
	root2->left = new TreeNode(3);
	root2->right = new TreeNode(3);

	SameTree sameTree;
	sameTree.isSameTree(root,root2);
}