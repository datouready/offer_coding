//�ҳ��������ظ������֡�
//
//
//��һ������Ϊ n ������ nums ����������ֶ��� 0��n - 1 �ķ�Χ�ڡ�
//������ĳЩ�������ظ��ģ�����֪���м��������ظ��ˣ�Ҳ��֪��ÿ�������ظ��˼��Ρ�
//���ҳ�����������һ���ظ������֡�
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/shu-zu-zhong-zhong-fu-de-shu-zi-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include"head.h"
using namespace std;
class Solution {
public:
	int findRepeatNumber(vector<int>& nums) {
		//1�������е����ַŵ���Ӧ���±꣬����±�val�������±꣬�ͽ�������ַŽ�ȥ
		//2������±�val�����±꣬���������
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