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
    TreeNode* fun(vector<int>&
    preorder, unordered_map<int,int>& mpp, int &ind, int i, int j){
        if(i>j){
            return NULL;
        }
         TreeNode* root = new TreeNode(preorder[ind++]);
        int mid=mpp[root->val];
        root->left=fun(preorder, mpp, ind, i, mid-1);
        root->right=fun(preorder, mpp, ind, mid+1, j);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        unordered_map<int,int> mpp;
        for(int i=0;i<inorder.size();i++){
            mpp[inorder[i]]=i;
        }
        int ind=0;
        return fun(preorder, mpp, ind, 0, inorder.size()-1);
    }
};