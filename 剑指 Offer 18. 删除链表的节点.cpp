//给定单向链表的头指针和一个要删除的节点的值，定义一个函数删除该节点。
//
//返回删除后的链表的头节点。
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
class Solution {
public:
	ListNode* deleteNode(ListNode* head, int val) {
		ListNode* pre = head;
		ListNode* cur = head;
		if (head->val == val)
		{
			if (head->next != NULL)
			{
				return head->next;
			}
			else
			{
				return NULL;
			}
		}
		while (cur != NULL)
		{
			if (cur->val == val)
			{
				pre->next = cur->next;
				return head;
			}
			else {
				pre = cur;
				cur = cur->next;
			}
		}
		return head;
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
	return 0;
};