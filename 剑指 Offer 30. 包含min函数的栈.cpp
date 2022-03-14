//����ջ�����ݽṹ��
//���ڸ�������ʵ��һ���ܹ��õ�ջ����СԪ�ص� min �����ڸ�ջ�У�
//���� min��push �� pop ��ʱ�临�Ӷȶ��� O(1)��
#include "head.h"
using namespace std;
//ʹ��һ������ջ�����ڷ���Сֵ��ÿ��minջ�������ݣ�����վ������һ����ǰ��СԪ��
//���������ݱ���СԪ��С�����������Ԫ�أ����������Ӹ���վջ��Ԫ��
class MinStack {
private:
	stack<int> min_stack;
	stack<int> data_stack;
public:
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		min_stack.push(x);
		if (data_stack.empty())
		{
			data_stack.push(x);
		}
		else if (data_stack.top() < x)
		{
			data_stack.push(data_stack.top);
		}
		else
		{
			data_stack.push(x);
		}
	}

	void pop() {

		min_stack.pop();
		data_stack.pop();
	}

	int top() {
		return min_stack.top();
	}

	int min() {
		return data_stack.top();
	}
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->min();
 */
int main()
{
	MinStack obj;
	vector<vector<int>> matrix;
	vector<int> first_row;
	vector<int> second_row;
	vector<int> third_row;
	first_row.push_back(1);
	matrix.push_back(first_row);
	first_row.push_back(2);
	//cout << matrix[0] << endl;
	cout << ret << endl;
	return 0;
}