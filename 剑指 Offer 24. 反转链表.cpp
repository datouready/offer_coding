//定义一个函数，输入一个链表的头节点，反转该链表并输出反转后链表的头节点。
//网上有3种解法
//1、借助栈
//2、辅助迭代
//3、递归方法
#include"head.h"
using namespace std;
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) :val(x), next(NULL)
	{
	}
};
class Solution {
public:
	//ListNode* reverseList(ListNode* head) {
	//	//通过定义pre来保证指向下一个节点是前面一个
	//	//通过定义next来保证之前的下一个节点被保留
	//	//通过定义current来操作进行节点迭代
	//	ListNode* pre = NULL;
	//	ListNode* current = head;
	//	ListNode* next = NULL;
	//	while (current!=NULL)
	//	{
	//		next = current->next;
	//		current->next = pre;
	//		pre = current;
	//		current = next;
	//	}
	//	return pre;
	//}
	ListNode* reverseList(ListNode* head) {


		//反转后指向前一个
		if (head == NULL || head->next == NULL)
		{
			return head;
		}
		else
		{
			ListNode* pre_Node = head->next;
			head->next = NULL;
			ListNode* NewNode = reverseList(pre_Node);
			pre_Node->next = head;
			return NewNode;
		}


	}
};
int main()
{
	Solution obj;

	return 0;
}