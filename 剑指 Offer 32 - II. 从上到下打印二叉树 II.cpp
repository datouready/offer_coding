//从上到下按层打印二叉树，
//同一层的节点按从左到右的顺序打印，每一层打印到一行。
#include"head.h"
using namespace std;

//Definition for a binary tree node.
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};
class Solution {
public:
	vector<vector<int>> levelOrder(TreeNode* root) {

		vector<int> dataVec;
		vector<vector<int>> retVec;
		queue<TreeNode*> dataStack;
		if (NULL == root)
		{
			return retVec;
		}
		dataStack.push(root);
		//	stack<TreeNode*> tempStack;
		int nums_start = 1;
		int nums_end = 0;
		dataVec.push_back(root->val);
		retVec.push_back(dataVec);
		dataVec.clear();
		while (dataStack.size() != 0)
		{
			for (int i = 0; i < nums_start; i++)
			{
				if (dataStack.front()->left != NULL)
				{

					dataVec.push_back(dataStack.front()->left->val);
					nums_end++;
					dataStack.push(dataStack.front()->left);
				}
				if (dataStack.front()->right != NULL)
				{
					dataVec.push_back(dataStack.front()->right->val);
					dataStack.push(dataStack.front()->right);

					nums_end++;
				}
				dataStack.pop();
			}
			nums_start = nums_end;
			nums_end = 0;
			if (dataVec.size() != 0)
			{
				retVec.push_back(dataVec);
				dataVec.clear();
			}

		}
		return retVec;
	}
};
int main()
{
	Solution obj;
	TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	vector<vector<int>> retVec = obj.levelOrder(root);
	//vector<int> nums;
	//nums.push_back(3); nums.push_back(1);nums.push_back(3);
	return 0;
};