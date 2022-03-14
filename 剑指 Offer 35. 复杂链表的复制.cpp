//��ʵ�� copyRandomList ����������һ����������
//�ڸ��������У�ÿ���ڵ������һ�� next ָ��ָ����һ���ڵ㣬
//����һ�� random ָ��ָ�������е�����ڵ���� null��
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/fu-za-lian-biao-de-fu-zhi-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������

#ifndef __HEAD_H__
#define __HEAD_H__
#endif
#include"head.h"

// Definition for a Node.
class Node {
public:
	int val;
	Node* next;
	Node* random;

	Node(int _val) {
		val = _val;
		next = NULL;
		random = NULL;
	}
};

class Solution {
public:
	Node* copyRandomList(Node* head) {

		if (head == NULL)
		{
			return NULL;
		}
		Node* Dou_List = concatList(head);
		Node* Temp_List = Dou_List;
		//Node* New_List=NULL;
		//New_List = Temp_List->next;
		//Node* New_List1 = New_List;
		while (Temp_List != NULL)
		{
			//New_List = Temp_List->next;
			if (Temp_List->random == NULL)
			{
				Temp_List->next->random = NULL;
			}
			else
			{
				Temp_List->next->random = Temp_List->random->next;
			}
			Temp_List = Temp_List->next->next;
		}

		//Temp_List=Temp_List->next;

		return splitList(Dou_List);
	}
	Node* splitList(Node* head)
	{
		Node* ret = head->next;
		Node* ret_Old = ret;
		Node* New_head = head;
		while (ret != NULL)
		{
			New_head->next = ret->next;
			New_head = New_head->next;
			if (New_head == NULL)
			{
				return ret_Old;
			}
			ret->next = New_head->next;

			ret = ret->next;

		}
		return ret_Old;
	}
	Node* cpoySimpleList(Node* head)
	{
		Node* ret = new Node(0);
		if (head == NULL)
		{
			return NULL;
		}
		else
		{
			ret->val = head->val;
			ret->next = cpoySimpleList(head->next);
		}
		return ret;
	}
	Node* concatList(Node* head)
	{
		if (head == NULL)
		{
			return NULL;
		}
		Node* ret = new Node(0);
		ret->val = head->val;
		ret->next = head->next;
		head->next = ret;
		concatList(ret->next);
		return head;
	}
};
int main()
{
	Solution obj;
	Node* T1 = new Node(1);
	Node* T1_raw = T1;
	Node* T2 = new Node(22);
	Node* T3 = new Node(3);
	Node* T4 = new Node(4);
	Node* T5 = new Node(5);
	Node* T6 = new Node(6);
	T1->next = T2;
	T2->next = T3;
	T3->next = T4;
	T4->next = T5;
	T5->next = T6;
	T6->next = NULL;
	T1->random = T5;
	T5->random = T2;
	T2->random = T6;
	T6->random = T1;
	Node* New_List = obj.copyRandomList(T1);
	return 0;
}