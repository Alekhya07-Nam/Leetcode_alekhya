/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void inorder(TreeNode* root, vector<int>& vec){
        if(!root){
            return;
        }
        inorder(root->left, vec);
        vec.push_back(root->val);
        inorder(root->right, vec);
    }
    TreeNode* fun(vector<int> &vec, int l, int r){
        if(l>r){
            return NULL;
        }
        int m=(l+r)/2;
        TreeNode* node=new TreeNode(vec[m]);
        node->left=fun(vec, l,m-1);
        node->right=fun(vec, m+1, r);
        return node;
    }
    TreeNode* balanceBST(TreeNode* root) {
        vector<int> vec;
        inorder(root, vec);
        return fun(vec,0, (int)vec.size()-1);
    }
};