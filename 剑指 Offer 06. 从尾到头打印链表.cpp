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
	//vector<int> reversePrint(ListNode* head) {
	//	//����һ������Ȼ�����һ��ջ�У�Ȼ���ջ�ŵ�vector��
	//	vector<int> retVector;
	//	stack<int> dataStack;
	//	while (head!=NULL)
	//	{
	//		dataStack.push(head->val);
	//		head = head->next;
	//	}
	//	while (dataStack.empty()!=true)
	//	{
	//		retVector.push_back(dataStack.top());
	//		dataStack.pop();
	//	}
	//	return retVector;
	//}
	vector<int> reversePrint(ListNode* head) {
		//ʹ�õݹ�ѭ��

		val_tail(head);

	}
	void val_tail(ListNode* head)
	{
		if (head != NULL)
		{
			val_tail(head->next);
			retVector.push_back(head->val);
		}
	}
	vector<int> retVector;
};
int main()
{
	Solution obj;

	return 0;
}