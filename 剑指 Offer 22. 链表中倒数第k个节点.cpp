//����һ����������������е�����k���ڵ㡣Ϊ�˷��ϴ�����˵�ϰ�ߣ�
//�����1��ʼ�������������β�ڵ��ǵ�����1���ڵ㡣
//
//���磬һ�������� 6 ���ڵ㣬��ͷ�ڵ㿪ʼ�����ǵ�ֵ������ 1��2��3��4��5��6��
//�������ĵ����� 3 ���ڵ���ֵΪ 4 �Ľڵ㡣
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/lian-biao-zhong-dao-shu-di-kge-jie-dian-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
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
	ListNode* getKthFromEnd(ListNode* head, int k) {
		ListNode* cur = head;
		ListNode* tail = head;
		for (int i = 0; i < k; i++)
		{
			tail = tail->next;
		}
		while (tail != NULL)
		{
			tail = tail->next;
			cur = cur->next;
		}
		return cur;
	}
};