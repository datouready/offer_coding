//��һ�� n * m �Ķ�ά�����У�ÿһ�ж����մ����ҵ�����˳������
//ÿһ�ж����մ��ϵ��µ�����˳�����������һ����Ч�ĺ�����
//����������һ����ά�����һ���������ж��������Ƿ��и�������
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
#include "head.h"
using namespace std;
class Solution {
public:
	//ʹ�ñ��������㷨
	//bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
	//	for (vector<vector<int>>::iterator it = matrix.begin(); it != matrix.end(); it++)
	//	{
	//		for (vector<int>::iterator it_row = (*it).begin(); it_row != (*it).end(); it_row++)
	//		{
	//			if (*it_row==target)
	//			{
	//				return true;
	//			}
	//		}
	//	}
	//	return false;
	//}
	//bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
	//	//�����Ͻ����±����������Ͻ����ϱ���ͬ��
	//	//����target�������ߣ�С��target��������
	//	//������º�����û�ˣ��Ǿͱ�ʾû�ҵ����target,����false
	//	vector<vector<int>>::iterator it_matrix;
	//	vector<int>::iterator it_row;
	//	int m = matrix.size();
	//	int n = (*(matrix.begin())).size()-1;
	//	int i = 0;
	//	while (i<m && n>=0)
	//	{
	//		if (matrix[i][n] > target)
	//		{
	//			n--;
	//		}
	//		else if (matrix[i][n] < target)
	//		{
	//			i++;
	//		}
	//		else
	//		{
	//			return true;
	//		}	
	//	}
	//	return false;
	//}
	bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
		//�����½����ϱ���
		//����target�������ߣ�С��target��������
		//������º�����û�ˣ��Ǿͱ�ʾû�ҵ����target,����false
		vector<vector<int>>::iterator it_matrix;
		vector<int>::iterator it_row;
		int m = matrix.size() - 1;
		if (m < 0)
		{
			return false;
		}
		int n = (*(matrix.begin())).size();
		int i = 0;
		while (i < n && m >= 0)
		{
			if (matrix[m][i] > target)
			{
				m--;
			}
			else if (matrix[m][i] < target)
			{
				i++;
			}
			else
			{
				return true;
			}
		}
		return false;
	}
};
int main()
{
	Solution obj;
	vector<vector<int>> matrix;
	vector<int> first_row;
	vector<int> second_row;
	vector<int> third_row;
	first_row.push_back(1);
	matrix.push_back(first_row);
	first_row.push_back(2);
	//cout << matrix[0] << endl;
	bool ret = obj.findNumberIn2DArray(matrix, 1);
	cout << ret << endl;
	return 0;
}