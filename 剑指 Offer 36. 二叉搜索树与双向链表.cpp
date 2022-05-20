/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node() {}

    Node(int _val) {
        val = _val;
        left = NULL;
        right = NULL;
    }
    Node(int _val, Node* _left, Node* _right) {
        val = _val;
        left = _left;
        right = _right;
    }
};
*/
class Solution {
public:
    Node* treeToDoublyList(Node* root) {
        if(root==NULL)
        {
            return NULL;
        }
        Node* left_root;
        Node* right_root;
        if(root->left!=NULL)
        {
            left_root=treeToDoublyList(root->left);
        }else
        {
            left_root=NULL;
        }
        if(root->right!=NULL)
        {
            right_root=treeToDoublyList(root->right);
        }else
        {
            right_root=NULL;
        }
        if(left_root==NULL)
        {
            if(right_root==NULL)
            {
                root->left=root;
                root->right=root;
                return root;
            }else{
                // 先改变根节点的指针
                root->left=right_root->left;
                root->right=right_root;
                // 改变head的指针
                right_root->left->right=root;
                // 最后改变tail的指针
                right_root->left=root;
                return root;
            }
        }else
        {
            if(right_root==NULL)
            {
                root->right=left_root;
                root->left=left_root->left;
                left_root->left->right=root;
                left_root->left=root;
                return left_root;
            }else{
                // 解决左tail与root
                left_root->left->right=root;
                root->left=left_root->left;
                // 解决左head与右tail
                left_root->left=right_root->left;
                right_root->left->right=left_root;
                // 解决右head与root
                root->right=right_root;
                right_root->left=root;

                // left_root->left->right=root;
                // root->right=right_root;
                // right_root->left->right=left_root;
                return left_root;
            }
        }
    }
};
