//#include<iostream>
//#include<stack>
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
//class TraverseTreeWithStack {
//public:
//	void printPostOrder(struct TreeNode* node) {
//		stack<struct TreeNode*> stackOfNodes;
//		TreeNode* current = node;
//		while (current != NULL || stackOfNodes.empty() == false) {
//			if (current != NULL) {
//				stackOfNodes.push(current);
//				current = current->left;
//			}
//			else {
//				TreeNode* temp = current->right;
//				if (temp == NULL) {
//					temp = stackOfNodes.top();
//					stackOfNodes.pop();
//					cout << temp->val;
//					while (temp == stackOfNodes.top()->right && stackOfNodes.empty() == false) {
//						temp = stackOfNodes.top();
//						stackOfNodes.pop();
//						cout << temp->val;
//					}
//				}
//				else {
//					current = temp;
//				}
//			}
//		}
//	}
//};

//void main() {
//	int noOfNodes = 5;
//	struct TreeNode* root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//	root->left->left = new TreeNode(4);
//	root->left->right = new TreeNode(5);
//
//	TraverseTreeWithStack traverseTreeObject;
//	cout << "printPreOrder traversal: ";
//	traverseTreeObject.printPostOrder(root);
//}