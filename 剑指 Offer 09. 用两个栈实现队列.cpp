//用两个栈实现一个队列。队列的声明如下，
//请实现它的两个函数 appendTail 和 deleteHead ，
//分别完成在队列尾部插入整数和在队列头部删除整数的功能。
//(若队列中没有元素，deleteHead 操作返回 - 1)
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
class CQueue {
public:
	stack<int> a;
	stack<int> b;
	CQueue() {
	}
	//创建2个stack，A和B，需要append先判断A是不是空，如果为空，直接将数据放到A，
	//如果A不为空，先将A里面数据放到B，然后将数据放到A，然后将B里面数据放到A
	void appendTail(int value) {
		int ret = -1;
		if (a.empty())
		{
			a.push(value);
		}
		else
		{
			while (a.size())
			{
				ret = a.top();
				b.push(ret);
				a.pop();
			}
			a.push(value);
			while (b.size())
			{
				ret = b.top();
				a.push(ret);
				b.pop();
			}
		}
	}
	int deleteHead() {
		int ret1 = -1;
		if (a.empty() != 1)
		{
			ret1 = a.top();
			a.pop();

		}
		return ret1;
	}
};