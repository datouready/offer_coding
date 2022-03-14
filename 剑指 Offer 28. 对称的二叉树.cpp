//请实现一个函数，用来判断一棵二叉树是不是对称的。
//如果一棵二叉树和它的镜像一样，那么它是对称的。
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

class Solution {
public:
	bool isSymmetric(TreeNode* root) {
		vector<TreeNode*> dataVec;
		vector<TreeNode*> tempVec;
		dataVec.push_back(root);
		//dataVec.push_back(root);
		while (dataVec.size() != 0)
		{
			int i = 0;
			int j = dataVec.size() - 1;
			while (i <= j)
			{
				if (dataVec[i] == NULL && dataVec[j] == NULL)
				{
					i++;
					j--;
					continue;
				}
				else if (dataVec[i] == NULL || dataVec[j] == NULL)
				{
					return false;
				}
				if (dataVec[i]->val == dataVec[j]->val)
				{
					i++;
					j--;
				}
				else
				{
					return false;
				}
			}
			for (vector<TreeNode*>::iterator it = dataVec.begin(); it != dataVec.end(); it++)
			{
				if (*it != NULL)
				{
					tempVec.push_back((*it)->left);
					tempVec.push_back((*it)->right);
				}
			}
			dataVec = tempVec;
			tempVec.clear();
		}
		return true;
	}
};
int main()
{
	Solution obj;
	TreeNode* tempTreeNode = new TreeNode(1);
	//tempTreeNode->left = new TreeNode(2);
	//tempTreeNode->right= new TreeNode(3);
	obj.isSymmetric(tempTreeNode);
	//obj.firstUniqChar("leetcode");
	//vector<int> nums;
	//nums.push_back(3); nums.push_back(1);nums.push_back(3);
	return 0;
};