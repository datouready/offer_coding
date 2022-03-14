//���ϵ��´�ӡ����������ÿ���ڵ㣬ͬһ��Ľڵ㰴�մ����ҵ�˳���ӡ��
#include"head.h"
using namespace std;
struct TreeNode
{
	int val;
	TreeNode* left_Node;
	TreeNode* right_Node;
	TreeNode(int x) :val(x), left_Node(), right_Node()
	{}
};
//20220214   18:30
//20220214   19:05
class Solution {
public:
	vector<int> levelOrder(TreeNode* root) {
		queue<TreeNode*> data_queue;
		vector<int> ret_vector;
		if (root == NULL)
		{
			return ret_vector;
		}
		data_queue.push(root);
		while (!data_queue.empty())
		{
			if (data_queue.front()->left_Node != NULL)
			{
				data_queue.push(data_queue.front()->left_Node);
			}
			if (data_queue.front()->right_Node != NULL)
			{
				data_queue.push(data_queue.front()->right_Node);
			}
			ret_vector.push_back(data_queue.front()->val);
			data_queue.pop();
		}

	}


};
int main()
{
	Solution obj;

	return 0;
};