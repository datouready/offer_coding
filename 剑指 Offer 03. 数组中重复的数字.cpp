//找出数组中重复的数字。
//
//
//在一个长度为 n 的数组 nums 里的所有数字都在 0～n - 1 的范围内。
//数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
//请找出数组中任意一个重复的数字。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
#include"head.h"
using namespace std;
class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		//1、将所有的数字放到对应的下标，如果下标val不等于下标，就将这个数字放进去
		//2、如果下标val等于下标，返回这个数
		//vector<int> data_vec;
		//const int b = 11;
		map<int, int> data_Map;
		data_Map[0] = 1;
		for (int i = 0; i < nums.size(); i++)
		{
			if (nums[i] == data_Map[nums[i]])
			{
				return nums[i];
			}
			else
			{
				data_Map[nums[i]] = nums[i];
			}
		}
		return 0;

	}
};
int main()
{
	Solution obj;
	vector<int> nums;
	nums.push_back(2); nums.push_back(3); nums.push_back(1);
	nums.push_back(0); nums.push_back(2); nums.push_back(5);
	nums.push_back(3);
	int ret = obj.findRepeatNumber(nums);
	return 0;
};