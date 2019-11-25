#include<iostream>
#include<vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class SameTree {
public:
	vector<int> printInOrder(struct TreeNode* node) {
		vector<int> nodes;
		if (node == NULL)
			return;
		printInOrder(node->left);
		nodes.push_back(node->val);
		printInOrder(node->right);
		return nodes;
	}

	bool isSameTree(TreeNode* p, TreeNode* q) {
		printInOrder(p);
		printInOrder(q);
		return printInOrder(p) == printInOrder(q);
	}
};

int main() {
	struct TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);

	struct TreeNode* root2 = new TreeNode(1);
	root2->left = new TreeNode(2);
	root2->right = new TreeNode(3);

	SameTree sameTree;
	cout << sameTree.isSameTree(root, root2);
	return 0;
}