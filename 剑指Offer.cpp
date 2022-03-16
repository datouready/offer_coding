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
	int cuttingRope(int n) {
		if (2 == n)
		{
			return 1;
		}
		if (n == 3)
		{
			return 2;
		}
		if (4 == n)
		{
			return 4;
		}
		int count3 = 0;
		int count4 = 0;
		while (n > 3)
		{
			n = n - 3;
			count3++;
		}
		if (1 == n)
		{
			count3--;
			count4++;
		}
		int ret =  pow(3, count3)*pow(4, count4)*n  ;
		for (int i = 1; i <= count3; i++)
		{
			ret = (  n) % 1000000007;
		}
		ret = ret * pow(4, count4)*n;
		return ret % 1000000007;
		return ret;
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