//给定一个数字，我们按照如下规则把它翻译为字符串：
//0 翻译成 “a” ，1 翻译成 “b”，……，11 翻译成 “l”，……，25 翻译成 “z”。
//一个数字可能有多个翻译。请编程实现一个函数，用来计算一个数字有多少种不同的翻译方法。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/ba-shu-zi-fan-yi-cheng-zi-fu-chuan-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
#include"head.h"
using namespace std;
class Solution {
public:
	int translateNum(int num) {
		int ret = 1;
		if (num < 10)
		{
			return 1;
		}
		if (num % 100 < 26 && num % 100 >= 10)
		{
			return translateNum(num / 100) + translateNum(num / 10);
		}
		else
		{
			return translateNum(num / 10);
		}
	}
};
int main()
{
	Solution obj;
	//TreeNode* tempTreeNode = new TreeNode(1);
	////tempTreeNode->left = new TreeNode(2);
	////tempTreeNode->right= new TreeNode(3);

	////obj.firstUniqChar("leetcode");
	vector<int> nums;
	nums.push_back(3); nums.push_back(2); nums.push_back(-3);
	//nums.push_back(-1); nums.push_back(1);nums.push_back(-3);
	//nums.push_back(1); nums.push_back(-1);
	//nums.push_back(5);
	//nums.push_back(6);
	//nums.push_back(1);
	//nums.push_back(6);
	vector<vector<int>> grid;
	grid.push_back(nums);
	grid.push_back(nums);
	int num = 123;
	int ret = obj.translateNum(num);
	return 0;
};