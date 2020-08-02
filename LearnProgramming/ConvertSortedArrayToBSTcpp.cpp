#include<iostream>
#include<vector>

using namespace std;

struct TreeNode {
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class ConvertSortedArrayToBST {
public:
	TreeNode* insertIntoTree(vector<int> nums, int start, int end) {
		if (start > end)
			return nullptr;
		int mid = (start + end) / 2;
		TreeNode* root = new TreeNode(nums[mid]);
		root->left = insertIntoTree(nums, start, (mid - 1));
		root->right = insertIntoTree(nums, (mid + 1), end);
		return root;
	}

	TreeNode* sortedArrayToBST(vector<int>& nums) {
		return insertIntoTree(nums, 0, nums.size() - 1);
	}

	void printPostOrder(struct TreeNode* node) {
		if (node == NULL)
			return;
		printPostOrder(node->left);
		printPostOrder(node->right);
		cout << node->val << " ";
	}
};

//void main() {
//	TreeNode* mainRoot;
//	vector<int> nums = { 1,2,3,4,5 };
//	ConvertSortedArrayToBST convertSortedArrayToBST;
//	mainRoot = convertSortedArrayToBST.sortedArrayToBST(nums);
//	convertSortedArrayToBST.printPostOrder(mainRoot);
//}