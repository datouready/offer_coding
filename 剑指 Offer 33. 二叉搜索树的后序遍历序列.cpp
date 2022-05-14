class Solution {
public:
	bool verifyPostorder(vector<int>& postorder) {
		int nums = postorder.size();
		if (nums <= 2)
		{
			return true;
		}
		int i = 0;
		for (i = 0; i < nums - 1; i++)
		{
			if (postorder[i] < postorder[nums - 1])
			{
				continue;
			}
			else
			{

				break;
			}
		}

		vector<int> postorder_temp(postorder.begin(), postorder.begin() + i);
		bool ret = verifyPostorder(postorder_temp);
		if (ret == false)
		{
			return false;
		}

		for (int j = i; j < nums - 1; j++)
		{
			if (postorder[j] > postorder[nums - 1])
			{
				continue;
			}
			else
			{
				return false;
			}
		}
		vector<int> postorder_temp1(postorder.begin() + i, postorder.end() - 1);
		ret = verifyPostorder(postorder_temp1);
		if (ret == false)
		{
			return false;
		}
		else
		{
			return true;
		}

	}
};
