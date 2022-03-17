//�������� n����˳���ӡ���� 1 ������ n λʮ���������������� 3�����ӡ�� 1��2��3 һֱ������ 3 λ�� 999��
// class Solution {
// public:
//     vector<int> printNumbers(int n) {
//         vector<int> ret_vec;
//         int max=1;
//         for(int i=0;i<n;i++)
//         {
//             max=max*10;
//         }
//         for(int i=1;i<max;i++)
//         {
//             ret_vec.push_back(i);
//         }
//         return ret_vec;
//     }
// };
class Solution {
private:
	vector<int> nums;
	string s;
public:
	vector<int> printNumbers(int n) {
		s.resize(n, '0');
		dfs(n, 0);
		return nums;
	}

	// ö���������
	void dfs(int end, int index) {
		if (index == end) {
			save(); return;
		}
		for (int i = 0; i <= 9; ++i) {
			s[index] = i + '0';
			dfs(end, index + 1);
		}
	}

	// ȥ���ײ�0
	void save() {
		int ptr = 0;
		while (ptr < s.size() && s[ptr] == '0') ptr++;
		if (ptr != s.size())
			nums.emplace_back(stoi(s.substr(ptr)));
	}
};