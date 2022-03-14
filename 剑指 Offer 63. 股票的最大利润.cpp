//�����ĳ��Ʊ�ļ۸���ʱ���Ⱥ�˳��洢�������У�
//���������ù�Ʊһ�ο��ܻ�õ���������Ƕ��٣�
#include"head.h"
using namespace std;
class Solution {
public:
	int maxProfit(vector<int>& prices) {

		int nums_price = prices.size();
		int retMaxProfit;
		if (nums_price <= 1)
		{
			return 0;
		}
		int leftMin = prices[nums_price - 1];
		int rightMax = prices[nums_price - 1];
		retMaxProfit = rightMax - leftMin;
		for (int i = nums_price - 1; i >= 0; i--)
		{
			if (rightMax >= prices[i])
			{
				if (leftMin > prices[i])
				{
					leftMin = prices[i];
					if ((rightMax - leftMin) > retMaxProfit)
					{
						retMaxProfit = rightMax - leftMin;
					}
				}
			}
			else
			{

				rightMax = prices[i];
				leftMin = prices[i];
			}
		}
		return retMaxProfit;
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
	nums.push_back(3); nums.push_back(1); nums.push_back(3);
	nums.push_back(5);
	nums.push_back(6);
	nums.push_back(1);
	nums.push_back(6);
	int ret = obj.maxProfit(nums);
	return 0;
};