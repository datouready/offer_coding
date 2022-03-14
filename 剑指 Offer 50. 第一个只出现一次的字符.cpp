//在字符串 s 中找出第一个只出现一次的字符。
//如果没有，返回一个单空格。 s 只包含小写字母。
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