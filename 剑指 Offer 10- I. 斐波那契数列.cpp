//写一个函数，输入 n ，求斐波那契（Fibonacci）数列的第 n 项（即 F(N)）。
//斐波那契数列的定义如下：
#include"head.h"
using namespace std;
//class Solution {
//public:
//	int fib(int n) {
//
//		data_Temp.insert(make_pair(1, 1));
//
//
//		data_Temp.insert(make_pair(0, 0));
//
//		int i = 2;
//		int val;
//		while (i <= n)
//		{
//			val = data_Temp[i - 2] + data_Temp[i - 1];
//			if (val / 1000000007 > 0)
//			{
//				data_Temp.insert(make_pair(i, val % 1000000007));
//			}
//			else
//			{
//				data_Temp.insert(make_pair(i, val));
//			}
//			data_Temp.insert(make_pair(i, val));
//			i++;
//		}
//		return data_Temp[n];
//		//int num = data_Temp[n-2]+ data_Temp[n-1];
//		//if (num/1000000007>0)
//		//{
//		//	data_Temp.insert(make_pair(n, num % 1000000007));
//		//	return num % 1000000007;
//		//}
//		//else
//		//{
//		//	data_Temp.insert(make_pair(n, num));
//		//	return num;
//		//}
//	}
//	map<int, int> data_Temp;
//};
class Solution {
public:
	int fib(int n) {

		//data_Temp.insert(make_pair(1, 1));


		//data_Temp.insert(make_pair(0, 0));


		int n_1 = 1;
		int n_2 = 0;
		if (n == 1)
		{
			return 1;
		}
		if (n == 0)
		{
			return 0;
		}
		int i = 2;
		int sum;
		while (i <= n)
		{
			sum = n_1 + n_2;

			sum = sum % 1000000007;

			n_2 = n_1;
			n_1 = sum;

			i++;
		}
		return sum;
		//int num = data_Temp[n-2]+ data_Temp[n-1];
		//if (num/1000000007>0)
		//{
		//	data_Temp.insert(make_pair(n, num % 1000000007));
		//	return num % 1000000007;
		//}
		//else
		//{
		//	data_Temp.insert(make_pair(n, num));
		//	return num;
		//}
	}
	//map<int,int> data_Temp;
};
int main()
{
	Solution obj;
	int ret = obj.fib(43);
	return 0;
};