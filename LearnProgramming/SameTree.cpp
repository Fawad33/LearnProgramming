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
	void printInOrder(struct TreeNode* node, vector<int> v) {
		if (node == NULL)
			return;
		printInOrder(node->left, v);
		v.push_back(node->val);
		printInOrder(node->right, v);
	}

	bool isSameTree(TreeNode* p, TreeNode* q) {
		vector<int> x, y;
		printInOrder(p, x);
		printInOrder(q, y);
		for (int i = 0; i < x.size(); i++) {
			if (x[i] != y[i]){
				cout << "false";
			return false;
			}
		}
		cout << "true";
		return true;
	}
};

void main() {
	struct TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);

	struct TreeNode* root2 = new TreeNode(1);
	root2->left = new TreeNode(9);
	root2->right = new TreeNode(3);

	SameTree sameTree;
	sameTree.isSameTree(root, root2);
}