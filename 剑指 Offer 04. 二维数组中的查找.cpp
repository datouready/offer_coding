//在一个 n * m 的二维数组中，每一行都按照从左到右递增的顺序排序，
//每一列都按照从上到下递增的顺序排序。请完成一个高效的函数，
//输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
#include "head.h"
using namespace std;
class Solution {
public:
	//使用暴力遍历算法
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
	//	//从右上角往下遍历（从左上角往上遍历同理）
	//	//大于target就往左走，小于target就往下走
	//	//如果往下和往左都没了，那就表示没找到这个target,返回false
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
		//从左下角往上遍历
		//大于target就往上走，小于target就往右走
		//如果往下和往左都没了，那就表示没找到这个target,返回false
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