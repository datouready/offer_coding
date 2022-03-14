//һ������Ϊn - 1�ĵ������������е��������ֶ���Ψһ�ģ�����ÿ�����ֶ��ڷ�Χ0��n - 1֮�ڡ�
//�ڷ�Χ0��n - 1�ڵ�n������������ֻ��һ�����ֲ��ڸ������У����ҳ�������֡�
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include"head.h"
using namespace std;

class Solution {
public:
	int minArray(vector<int>& numbers) {
		int left = 0;
		int total_nums = numbers.size();
		int right = total_nums - 1;
		if (total_nums == 0)
		{
			return 0;
		}
		if (total_nums == 1)
		{
			return numbers[0];
		}
		if (numbers[left] == numbers[right])
		{
			for (int i = 0; i < right; i++)
			{
				if (numbers[i] == numbers[0])
				{
					left++;
				}
				else
				{
					break;
				}
			}
		}
		if (numbers[left] < numbers[right])
		{
			return numbers[left];
		}

		int mid = (left + right) / 2;

		while (right - left > 1)
		{
			if (numbers[mid] >= numbers[left])
			{
				left = mid;
			}
			else
			{
				right = mid;
			}
			mid = (left + right) / 2;
		}
		if (numbers[left] > numbers[right])
		{
			return numbers[right];
		}
		else
		{
			return numbers[left];
		}
	}
};
int main()
{
	Solution obj;
	vector<int> nums;
	nums.push_back(3); nums.push_back(1); nums.push_back(3);
	int ret = obj.minArray(nums);
	return 0;
};