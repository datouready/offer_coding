//����һ�����֣����ǰ������¹����������Ϊ�ַ�����
//0 ����� ��a�� ��1 ����� ��b����������11 ����� ��l����������25 ����� ��z����
//һ�����ֿ����ж�����롣����ʵ��һ����������������һ�������ж����ֲ�ͬ�ķ��뷽����
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/ba-shu-zi-fan-yi-cheng-zi-fu-chuan-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
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