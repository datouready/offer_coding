//����ַ������ҳ�һ����Ĳ������ظ��ַ������ַ�����
//���������ַ����ĳ��ȡ�
#include"head.h"
using namespace std;
class Solution {
public:
	int lengthOfLongestSubstring(string s) {
		map<char, int> positionMap;
		int nums = s.size();
		int i = 0, j = 0;
		int retMax = 0;
		while (j < nums)
		{
			if (positionMap.find(s[j]) == positionMap.end())
			{

				positionMap.insert(make_pair(s[j], j));
				retMax < positionMap.size() ? retMax = positionMap.size() : 1;
				j++;
			}
			else
			{
				positionMap.clear();
				i = positionMap[s[j]] + 1;
				j = i;
			}
		}
		return retMax;
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
	string num = "123";
	int ret = obj.lengthOfLongestSubstring(num);
	return 0;
};