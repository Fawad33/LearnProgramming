//#include<iostream>
//#include<vector>
//#include <string>
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
//class BinaryTreePaths {
//public:
//	void binaryTreePathsHelper(TreeNode* root, vector<string> &paths, string s) {
//		if (root == NULL)
//			return;
//
//		if (s != "")
//			s += "->";
//
//		s = s + to_string(root->val);
//
//		if (root->left == NULL) {
//			if (root->right == NULL) {
//				paths.push_back(s);
//				return;
//			}
//			else {
//				binaryTreePathsHelper(root->right, paths, s);
//			}					
//		}
//		else {
//			binaryTreePathsHelper(root->left, paths, s);
//			binaryTreePathsHelper(root->right, paths, s);
//		}
//	}
//
//	vector<string> binaryTreePaths(TreeNode* root) {
//		string s = "";
//		vector<string> paths;
//		binaryTreePathsHelper(root, paths, s);
//		return paths;
//	}
//};

//void main() {
//	struct TreeNode* root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//	root->left->right = new TreeNode(5);
//	BinaryTreePaths binaryTreePathsObj;
//	vector<string> x = binaryTreePathsObj.binaryTreePaths(root);
//	for (auto i : x)
//		cout << i << " ";
//}