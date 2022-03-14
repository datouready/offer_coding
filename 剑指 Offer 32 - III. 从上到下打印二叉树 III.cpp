//请实现一个函数按照之字形顺序打印二叉树，
//即第一行按照从左到右的顺序打印，第二层按照从右到左的顺序打印，
//第三行再按照从左到右的顺序打印，其他行以此类推。

#include"head.h"
using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {};
};
class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {
		vector<vector<int>> retVector;
		if (NULL == root)
		{
			return retVector;
		}
		stack<TreeNode*> leftStack;
		stack<TreeNode*> rightStack;
		vector<int> dataVector;

		leftStack.push(root);
		dataVector.push_back(root->val);
		retVector.push_back(dataVector);
		dataVector.clear();
		while (!leftStack.empty())
		{
			while (!leftStack.empty())
			{
				if (leftStack.top()->right != NULL)
				{
					rightStack.push(leftStack.top()->right);
					dataVector.push_back(leftStack.top()->right->val);
				}
				if (leftStack.top()->left != NULL)
				{
					rightStack.push(leftStack.top()->left);
					dataVector.push_back(leftStack.top()->left->val);
				}

				leftStack.pop();
			}
			if (!dataVector.empty())
			{
				retVector.push_back(dataVector);
				dataVector.clear();
			}

			while (!rightStack.empty())
			{
				if (rightStack.top()->left != NULL)
				{
					leftStack.push(rightStack.top()->left);
					dataVector.push_back(rightStack.top()->left->val);
				}
				if (rightStack.top()->right != NULL)
				{
					leftStack.push(rightStack.top()->right);
					dataVector.push_back(rightStack.top()->right->val);
				}

				rightStack.pop();
			}
			if (!dataVector.empty())
			{
				retVector.push_back(dataVector);
				dataVector.clear();
			}
		}
		return retVector;
	}
};
int main()
{
	Solution obj;
	TreeNode* root = new TreeNode(1);
	obj.levelOrder(root);
	//vector<int> nums;
	//nums.push_back(3); nums.push_back(1);nums.push_back(3);
	return 0;
};