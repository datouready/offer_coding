 class Solution {
 public:
	 vector<vector<int>> pathSum(TreeNode* root, int target) { 
        vector<vector<int>> ret12;
		 if ((root!=NULL)&&((target - root->val) != 0))
		 {
			 vector<vector<int>> ret1;
			 vector<vector<int>> ret2;
			 if ((root->left != NULL))
			 {
				 ret1 = pathSum(root->left, target - (root->val));
				 for (int i = 0; i < ret1.size(); i++)
				 {
					 ret1[i].insert(ret1[i].begin(),root->val);
				 }
			 }
			 if ((root->right != NULL))
			 {
				 ret2 = pathSum(root->right, target - (root->val));
				 for (int i = 0; i < ret2.size(); i++)
				 {
					 ret2[i].insert(ret2[i].begin(),root->val);
				 }
			 }
			 for (int i=0;i<ret2.size();i++)
			 {
				 ret1.push_back(ret2[i]);
			 }
			 return ret1;
		 }
		 else if ((root!=NULL)&&((target - root->val) == 0))
		 {
			 vector<vector<int>> ret3;
			 if (root->left == NULL && root->right == NULL)
			 {
				 vector<int> ret3_1;
				 ret3_1.push_back(root->val);
				 ret3.push_back(ret3_1);
                return ret3;
			 }else{
			 vector<vector<int>> ret1;
			 vector<vector<int>> ret2;
			 if ((root->left != NULL))
			 {
				 ret1 = pathSum(root->left, 0);
				 for (int i = 0; i < ret1.size(); i++)
				 {
					 ret1[i].insert(ret1[i].begin(),root->val);
				 }
			 }
			 if ((root->right != NULL))
			 {
				 ret2 = pathSum(root->right, 0);
				 for (int i = 0; i < ret2.size(); i++)
				 {
					 ret2[i].insert(ret2[i].begin(),root->val);
				 }
			 }
			 for (int i=0;i<ret2.size();i++)
			 {
				 ret1.push_back(ret2[i]);
			 }
			 return ret1;
             }
		 }
        return ret12;
     }
 };
