//定义栈的数据结构，
//请在该类型中实现一个能够得到栈的最小元素的 min 函数在该栈中，
//调用 min、push 及 pop 的时间复杂度都是 O(1)。
#include "head.h"
using namespace std;
//使用一个辅助栈，用于放最小值，每次min栈新增数据，辅助站就增加一个当前最小元素
//新增的数据比最小元素小，就增加这个元素，否则还是增加辅助站栈顶元素
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