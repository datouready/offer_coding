#include"head.h"
using namespace std;

 // Definition for singly-linked list.
  //struct ListNode {
  //    int val;
  //    ListNode *next;
  //    ListNode(int x) : val(x), next(NULL) {}
  //};

	

 //Definition for a binary tree node.
 //struct TreeNode {
 //    int val;
 //    TreeNode *left;
 //    TreeNode *right;
 //    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 // };

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
	map<int, int> inorder_map;
	vector<int>preorder1;
	vector<int>inorder1;
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		preorder1 = preorder;
		inorder1 = inorder;
		for (int i = 0; i < inorder.size(); i++)
		{
			inorder_map.insert(make_pair(inorder[i], i));
		}
		return childTree(0, 0, inorder.size() - 1);

	}

	TreeNode* childTree(int root, int left, int right)
	{
		if (left > right)
		{
			return NULL;
		}
		TreeNode* retNode = new TreeNode(0);
		retNode->val = preorder1[root];
		int position = inorder_map[preorder1[root]];
		retNode->left = childTree(root + 1, left, position - 1);
		retNode->right = childTree(position + 1, position + 1, right);
		return retNode;
	}
};
int main()
{
	Solution obj;
	TreeNode* tempTreeNode = new TreeNode(1);
	tempTreeNode->left = new TreeNode(2);
	tempTreeNode->right= new TreeNode(3);

	////obj.firstUniqChar("leetcode");
	vector<int> nums;
	nums.push_back(3); nums.push_back(9);nums.push_back(20);
	nums.push_back(15); nums.push_back(7);
	vector<int> nums1;
	nums1.push_back(9); nums1.push_back(3); nums1.push_back(15);
	nums1.push_back(20); nums1.push_back(7);
	vector<int> nums2;
	nums2.push_back(1); nums2.push_back(2); nums2.push_back(3);
	vector<int> nums3;
	nums3.push_back(2); nums3.push_back(3); nums3.push_back(1);
	//nums.push_back(-1); nums.push_back(1);nums.push_back(-3);
	//nums.push_back(1); nums.push_back(-1);
	//nums.push_back(5);
	//nums.push_back(6);
	//nums.push_back(1);
	//nums.push_back(6);
	vector<vector<int>> grid;
	grid.push_back(nums);
	grid.push_back(nums);
	string num ="123";

 	obj.buildTree(nums2,nums3);
	return 0;
};