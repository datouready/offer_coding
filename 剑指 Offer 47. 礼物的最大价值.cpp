//��һ�� m*n �����̵�ÿһ�񶼷���һ�����ÿ�����ﶼ��һ���ļ�ֵ����ֵ���� 0����
//����Դ����̵����Ͻǿ�ʼ�ø�����������ÿ�����һ��������ƶ�һ��ֱ���������̵����½ǡ�
//����һ�����̼������������ļ�ֵ���������������õ����ټ�ֵ�����
//
//
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/li-wu-de-zui-da-jie-zhi-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include"head.h"
using namespace std;
//class Solution {
//public:��ʱ
//	int maxValue(vector<vector<int>>& grid) {
//		
//		int m=grid.size();
//		int n = grid[0].size();
//		int max = grid[m - 1][n - 1];
//		int max_n=0;
//		int max_m=0;
//		if (n-2>=0)
//		{
//			max_n= maxTemp(grid, m-1, n - 2);
//		}
//		if (m - 2 >= 0)
//		{
//			max_m=maxTemp(grid, m-2, n-1);
//		}
//		if (max_n > max_m)
//		{
//			max += max_n;
//		}
//		else
//		{
//			max += max_m;
//		}
//		return max;
//	}
//	int maxTemp(vector<vector<int>>& grid,int m,int n)
//	{
//		int max = grid[m][n];
//		int max_n = 0;
//		int max_m = 0;
//		if (n - 1 >= 0)
//		{
//			max_n = maxTemp(grid, m, n - 1);
//		}
//		if (m - 1 >= 0)
//		{
//			max_m = maxTemp(grid, m - 1, n);
//		}
//		if (max_n > max_m)
//		{
//			max += max_n;
//		}
//		else
//		{
//			max += max_m;
//		}
//		return max;
//	}
//
//};
class Solution {
public:
	int maxValue(vector<vector<int>>& grid) {
		int m = grid.size();
		int n = grid[0].size();
		map<int, int> position_max;
		position_max.insert(make_pair(0, grid[0][0]));
		int i = 0, j = 0;
		int key_value;
		int pre_i;
		int pre_j;
		int max_i = 0;
		int max_j = 0;

		for (int i = 0; i < m; i++)
		{
			for (int j = 0; j < n; j++)
			{
				max_i = 0;
				max_j = 0;
				pre_i = i - 1;
				pre_j = j - 1;
				if (pre_i >= 0)
				{
					max_i += position_max[pre_i*n + j];
				}
				if (pre_j >= 0)
				{
					max_j += position_max[i*n + pre_j];;
				}
				if (max_i > max_j)
				{
					position_max.insert(make_pair(i*n + j, max_i + grid[i][j]));
				}
				else
				{
					position_max.insert(make_pair(i*n + j, max_j + grid[i][j]));
				}
			}

		}
		return  position_max[m*n - 1];
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
	int ret = obj.maxValue(grid);
	return 0;
};