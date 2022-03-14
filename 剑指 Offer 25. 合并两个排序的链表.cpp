//输入两个递增排序的链表，合并这两个链表并使新链表中的节点仍然是递增排序的。
#include"head.h"
using namespace std;

// Definition for singly-linked list.
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 // Definition for singly-linked list

class Solution {
public:
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* l1_current = l1;
		ListNode* l2_current = l2;
		ListNode* ret;
		ListNode* ret_current;
		if (l1 == NULL)
		{
			return l2;
		}
		if (l2 == NULL)
		{
			return l1;
		}
		if ((l1->val) > (l2->val))
		{
			ret = l2;
			l2_current = l2->next;
		}
		else
		{
			ret = l1;
			l1_current = l1->next;
		}
		ret_current = ret;
		while (l1_current != NULL && l2_current != NULL)
		{
			if (l1_current->val > l2_current->val)
			{
				ret_current->next = l2_current;
				ret_current = ret_current->next;
				l2_current = l2_current->next;
			}
			else
			{
				ret_current->next = l1_current;
				ret_current = ret_current->next;
				l1_current = l1_current->next;
			}
		}
		if (l1_current == NULL)
		{
			ret_current->next = l2_current;
		}
		if (l2 == NULL)
		{
			ret_current->next = l1_current;
		}
		return ret;
	}
};
int main()
{
	Solution obj;
	//TreeNode* tempTreeNode = new TreeNode(1);
	////tempTreeNode->left = new TreeNode(2);
	////tempTreeNode->right= new TreeNode(3);

	////obj.firstUniqChar("leetcode");
	vector<int> nums;
	nums.push_back(3); nums.push_back(2); nums.push_back(-3);
	//nums.push_back(-1); nums.push_back(1);nums.push_back(-3);
	//nums.push_back(1); nums.push_back(-1);
	//nums.push_back(5);
	//nums.push_back(6);
	//nums.push_back(1);
	//nums.push_back(6);
	vector<vector<int>> grid;
	grid.push_back(nums);
	grid.push_back(nums);
	string num = "123";
	ListNode* a = new ListNode(1);
	ListNode* b = new ListNode(1);
	obj.mergeTwoLists(a, b);
	return 0;
};