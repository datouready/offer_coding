//假设把某股票的价格按照时间先后顺序存储在数组中，
//请问买卖该股票一次可能获得的最大利润是多少？

#方法一
从前往后遍历，动态更新最小买入点和最大收益
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int nums_vec=prices.size();
        if(nums_vec<2)
        {
            return maxProfit;
        }
        int buyprice=prices[0];
        int max_current=0;
        for(int i=1;i<nums_vec;i++)
        {
		#更新最小买入点
                if(prices[i]<=buyprice)
                {
                    buyprice=prices[i];
                }else
                {
		#更新最大收益
                    max_current=prices[i]-buyprice;
                    if(maxProfit<max_current)
                    {
                        maxProfit=max_current;
                    }
                }
        }
        return maxProfit;
    }
};

#方法二

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
