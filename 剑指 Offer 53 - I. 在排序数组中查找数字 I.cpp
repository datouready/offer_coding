//统计一个数字在排序数组中出现的次数。
#include"head.h"
using namespace std;
class Solution {
public:
	int search(vector<int>& nums, int target) {
		if (nums.empty())
		{
			return 0;
		}
		int left = 0;
		int right = nums.size() - 1;
		int mid = (left + right) / 2;;
		int ret = 0;
		while (right - left > 1)
		{
			mid = (left + right) / 2;
			if (nums[mid] > target)
			{
				right = mid;
			}
			else if (nums[mid] < target)
			{
				left = mid;
			}
			else
			{
				break;
			}
		}
		if (right - left > 1)
		{
			left = mid;
			right = mid + 1;
		}
		if (right - left < 1)
		{
			right = left + 1;
		}

		while (left >= 0)
		{
			if (nums[left] == target)
			{
				ret++;
				left--;
			}
			else
			{
				break;
			}
		}
		while (right < nums.size())
		{
			if (nums[right] == target)
			{
				ret++;
				right++;
			}
			else
			{
				break;
			}
		}
		return ret;
	}
};
int main()
{
	Solution obj;
	vector<int> nums;
	nums.push_back(1); nums.push_back(2); nums.push_back(3);
	int ret = obj.search(nums, 1);
	return 0;
};