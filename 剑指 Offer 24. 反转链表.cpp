//����һ������������һ�������ͷ�ڵ㣬��ת�����������ת�������ͷ�ڵ㡣
//������3�ֽⷨ
//1������ջ
//2����������
//3���ݹ鷽��
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
	//	//ͨ������pre����ָ֤����һ���ڵ���ǰ��һ��
	//	//ͨ������next����֤֮ǰ����һ���ڵ㱻����
	//	//ͨ������current���������нڵ����
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


		//��ת��ָ��ǰһ��
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