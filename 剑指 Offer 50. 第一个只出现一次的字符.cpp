//���ַ��� s ���ҳ���һ��ֻ����һ�ε��ַ���
//���û�У�����һ�����ո� s ֻ����Сд��ĸ��
#include"head.h"
using namespace std;
class Solution {
public:
	char firstUniqChar(string s) {
		char ret = ' ';
		if ("" == s)
		{
			return ret;
		}
		unordered_map<char, int> dataMap;
		for (int i = 0; i < s.size(); i++)
		{
			if (dataMap.count(s[i]) == 0)
			{
				dataMap[s[i]] = 1;
			}
			else
			{
				dataMap[s[i]]++;
			}
		}
		for (int i = 0; i < s.size(); i++)
		{
			if (dataMap[s[i]] == 1)
			{
				return s[i];
			}
		}
		return ret;
	}
};
int main()
{
	Solution obj;
	obj.firstUniqChar("leetcode");
	//vector<int> nums;
	//nums.push_back(3); nums.push_back(1);nums.push_back(3);
	return 0;
};