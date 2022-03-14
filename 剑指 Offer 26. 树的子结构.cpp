//�������ö�����A��B���ж�B�ǲ���A���ӽṹ��(Լ��������������һ�������ӽṹ)
//
//B��A���ӽṹ�� �� A���г��ֺ�B��ͬ�Ľṹ�ͽڵ�ֵ��
#include"head.h"
using namespace std;
struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int x) :val(x), left(NULL), right(NULL)
	{
	}
};
class Solution {
public:
	bool isSubStructure(TreeNode* A, TreeNode* B) {

		if (A == NULL || B == NULL)
		{
			return false;
		}
		if (CompareNode(A, B))
		{
			return true;
		}
		if (isSubStructure(A->left, B))
		{
			return true;
		}
		if (isSubStructure(A->right, B))
		{
			return true;
		}
		return false;
	}
	bool CompareNode(TreeNode* A, TreeNode* B)
	{
		if (B == NULL)
		{
			return true;
		}
		if (A == NULL)
		{
			return false;
		}
		if (A->val != B->val)
		{
			return false;
		}
		return CompareNode(A->left, B->left) && CompareNode(A->right, B->right);
	}
};
int main()
{
	Solution obj;
	TreeNode* A = new TreeNode(1);
	A->left = new TreeNode(0);
	A->right = new TreeNode(1);
	A->right->left = new TreeNode(-4);
	A->left->left = new TreeNode(3);
	A->left->right = new TreeNode(4);
	TreeNode* B = new TreeNode(1);
	B->left = new TreeNode(-5);
	//B->left->left = new TreeNode(6);
	//B->left->right = new TreeNode(4);
	bool ret = obj.isSubStructure(A, B);
	return 0;
};