//给定一棵二叉搜索树，请找出其中第 k 大的节点的值。
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
	int kthLargest(TreeNode* root, int k) {
		midSearchNode(root);
		return NodeVal[k - 1];
	}
	void midSearchNode(TreeNode* root)
	{
		if (root->right != NULL)
		{
			midSearchNode(root->right);
		}
		NodeVal.push_back(root->val);
		if (root->left != NULL)
		{
			midSearchNode(root->left);
		}
		return;
	}
	vector<int> NodeVal;
};