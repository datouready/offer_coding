//给你一根长度为 n 的绳子，请把绳子剪成整数长度的 m 段（m、n都是整数，n > 1并且m > 1），
//每段绳子的长度记为 k[0], k[1]...k[m - 1] 。请问 k[0] * k[1] * ...*k[m - 1] 可能的最大乘积是多少？
//例如，当绳子的长度是8时，我们把它剪成长度分别为2、3、3的三段，此时得到的最大乘积是18。
//
//答案需要取模 1e9 + 7（1000000007），如计算初始结果为：1000000008，请返回 1。
//
//来源：力扣（LeetCode）
//链接：https ://leetcode-cn.com/problems/jian-sheng-zi-ii-lcof
//著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
class Solution {
public:
	int cuttingRope(int n) {
		if (2 == n)
		{
			return 1;
		}
		if (n == 3)
		{
			return 2;
		}
		if (4 == n)
		{
			return 4;
		}
		int count3 = 0;
		int count4 = 0;
		while (n > 3)
		{
			n = n - 3;
			count3++;
		}
		if (1 == n)
		{
			count3--;
			count4++;
		}
		long long ret = 1;
		// long long ret=pow(3,count3)*pow(4,count4)*n;
		for (int i = 1; i <= count3; i++)
		{
			ret = (ret * 3) % 1000000007;
		}
		ret = ret * pow(4, count4)*n;
		return ret % 1000000007;
	}
};