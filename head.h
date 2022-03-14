#include<iostream>
#include<vector>
#include<stdio.h>
#include<stack>
#include<queue>
#include<map>
#include<unordered_map>

struct TreeNode
{
	int val;
	TreeNode* left;
	TreeNode* right;
	TreeNode(int value) :val(value), left(NULL), right(NULL)
	{

	}
};