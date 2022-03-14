//一个长度为n - 1的递增排序数组中的所有数字都是唯一的，并且每个数字都在范围0～n - 1之内。
//在范围0～n - 1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/que-shi-de-shu-zi-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
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