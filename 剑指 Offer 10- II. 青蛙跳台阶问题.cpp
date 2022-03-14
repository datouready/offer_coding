//一只青蛙一次可以跳上1级台阶，也可以跳上2级台阶。
//求该青蛙跳上一个 n 级的台阶总共有多少种跳法。
//
//答案需要取模 1e9 + 7（1000000007），如计算初始结果为：1000000008，请返回 1。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/qing-wa-tiao-tai-jie-wen-ti-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
#include"head.h"
using namespace std;

//判断是方式不是步数
class Solution {
public:
	int numWays(int n) {
		vector<int> dataVec;
		if (1 == n || 0 == n)
		{
			dataVec.push_back(1);
			dataVec.push_back(1);
			return 1;
		}
		if (2 == n)
		{
			dataVec.push_back(2);
			return 2;
		}
		for (int i = 2; i < n; i++)
		{
			dataVec.push_back((dataVec[i - 1] + dataVec[i - 2]) % 1000000007);
		}
		return (dataVec[n - 2] + dataVec[n - 3]) % 1000000007;

	}
};
int main()
{
	Solution obj;
	TreeNode* tempTreeNode = new TreeNode(1);
	//tempTreeNode->left = new TreeNode(2);
	//tempTreeNode->right= new TreeNode(3);
	int ret = obj.numWays(3);
	//obj.firstUniqChar("leetcode");
	//vector<int> nums;
	//nums.push_back(3); nums.push_back(1);nums.push_back(3);
	return 0;
};