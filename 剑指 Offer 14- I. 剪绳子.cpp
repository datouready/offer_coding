//����һ������Ϊ n �����ӣ�������Ӽ����������ȵ� m �Σ�m��n����������n > 1����m > 1����
//ÿ�����ӵĳ��ȼ�Ϊ k[0], k[1]...k[m - 1] ������ k[0] * k[1] * ...*k[m - 1] ���ܵ����˻��Ƕ��٣�
//���磬�����ӵĳ�����8ʱ�����ǰ������ɳ��ȷֱ�Ϊ2��3��3�����Σ���ʱ�õ������˻���18��
//
//��Դ�����ۣ�LeetCode��
//���ӣ�https ://leetcode-cn.com/problems/jian-sheng-zi-lcof
//����Ȩ������������С���ҵת������ϵ�ٷ���Ȩ������ҵת����ע��������
class Solution {
public:
	int cuttingRope(int n) {
		int nums3 = 0;
		int nums4 = 0;
		if (n == 3)
		{
			return 2;
		}
		if (n == 2)
		{
			return 1;
		}
		while (n > 3)
		{
			nums3++;
			n = n - 3;
		}
		if (1 == n && nums3)
		{
			nums3--;
			nums4++;
		}
		return pow(3, nums3)*pow(4, nums4)*n;
	}
};