#include<iostream>
#include<vector>
#include <string>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class BinaryTreePathsNewApproach {
public:
	void binaryTreePathsHelper(TreeNode* root, vector<string>& paths, string prefix) {
		if (root == NULL)
			return;
		else
			prefix = prefix + to_string(root->val) + "->";

		if (root->left == NULL) {
			if (root->right == NULL) {
				prefix.pop_back();
				prefix.pop_back();
				paths.push_back(prefix);
				prefix = "";
				return;
			}
			else {
				binaryTreePathsHelper(root->right, paths, prefix);
			}
		}
		else {
			binaryTreePathsHelper(root->left, paths, prefix);
			binaryTreePathsHelper(root->right, paths, prefix);
		}
	}

	vector<string> binaryTreePaths(TreeNode* root) {
		string prefix = "";
		vector<string> paths;
		binaryTreePathsHelper(root, paths, prefix);
		return paths;
	}
};

//void main() {
//	struct TreeNode* root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//	root->left->right = new TreeNode(5);
//	BinaryTreePathsNewApproach binaryTreePathNewApproachsobj;
//	vector<string> x = binaryTreePathNewApproachsobj.binaryTreePaths(root);
//	for (auto i : x)
//		cout << i << " ";
//}