//����һ���������飬�����е�һ������������������һ�������顣
//������������ĺ͵����ֵ��
//Ҫ��ʱ�临�Ӷ�ΪO(n)��
#include"head.h"
using namespace std;
class Solution {
public:
	int maxSubArray(vector<int>& nums) {
		int sum = nums[0];
		int max = sum;
		for (int i = 1; i < nums.size(); i++)
		{
			if (nums[i] > 0)
			{
				if (sum >= 0)
				{
					sum = sum + nums[i];
					if (sum > max)
					{
						max = sum;
					}
				}
				else
				{
					sum = nums[i];
					if (sum > max)
					{
						max = sum;
					}
				}
			}
			else
			{
				if (sum >= 0)
				{
					sum = sum + nums[i];
				}
				else
				{
					if (nums[i] > max)
					{
						max = nums[i];
					}
				}
			}
		}
		return max;
	}
};
int main()
{
	Solution obj;
	TreeNode* tempTreeNode = new TreeNode(1);
	//tempTreeNode->left = new TreeNode(2);
	//tempTreeNode->right= new TreeNode(3);

	//obj.firstUniqChar("leetcode");
	vector<int> nums;
	nums.push_back(3); nums.push_back(2); nums.push_back(-3);
	nums.push_back(-1); nums.push_back(1); nums.push_back(-3);
	nums.push_back(1); nums.push_back(-1);
	//nums.push_back(5);
	//nums.push_back(6);
	//nums.push_back(1);
	//nums.push_back(6);
	int ret = obj.maxSubArray(nums);
	return 0;
};