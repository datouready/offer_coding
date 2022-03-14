//请完成一个函数，输入一个二叉树，该函数输出它的镜像。
#include"head.h"
using namespace std;
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int value) :val(value), left(NULL), right(NULL)
	{

	}
};
//class Solution {
//public:
//	TreeNode* mirrorTree(TreeNode* root) {
//		if (NULL == root)
//		{
//			return NULL;
//		}
//		TreeNode* tempTreeNode = NULL;
//		
//		mirrorTree(root->right);
//		mirrorTree(root->left);
//		tempTreeNode = root->left;
//		root->left = root->right;
//		root->right = tempTreeNode;
//		return root;
//	}
//};
class Solution {
public:
	TreeNode* mirrorTree(TreeNode* root) {
		if (root == nullptr) return nullptr;
		TreeNode* tmp = root->left;
		root->left = mirrorTree(root->right);
		root->right = mirrorTree(tmp);
		return root;
	}
};
int main()
{
	Solution obj;
	TreeNode* tempTreeNode = new TreeNode(1);
	tempTreeNode->left = new TreeNode(2);
	tempTreeNode->right = new TreeNode(3);
	obj.mirrorTree(tempTreeNode);
	//obj.firstUniqChar("leetcode");
	//vector<int> nums;
	//nums.push_back(3); nums.push_back(1);nums.push_back(3);
	return 0;
};