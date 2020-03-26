#include<iostream>
#include<algorithm>
#include<cmath>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

struct TreeResult {
	bool result;
	int height;
};

class BalancedBinaryTeeWithStruct {
public:
	TreeResult findIsBalanced(TreeNode* root) {
		if (root == NULL) {
			TreeResult z;
			z.height = 0;
			z.result = true;
			return z;
		}
		auto x = findIsBalanced(root->left);
		if (x.result == false) {
			x.height++;
			return x;
		}
			
		auto y = findIsBalanced(root->right);
		if (y.result == false) {
			y.height++;
			return y;
		}
		if (abs(x.height - y.height) > 1) {
			x.height++, y.height++;
			x.result = false;
			return x;
		}
		TreeResult p;
		p.height = max(x.height, y.height) + 1;
		p.result = true;
		return p;
	}

	bool isBalanced(TreeNode* root) {
		return findIsBalanced(root).result;
	}
};

void main() {
	struct TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->left = new TreeNode(4);
	root->left->right = new TreeNode(5);

	BalancedBinaryTeeWithStruct balancedBinaryTeeWithStructObject;
	cout << balancedBinaryTeeWithStructObject.isBalanced(root);
}