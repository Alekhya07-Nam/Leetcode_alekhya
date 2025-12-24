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
    void fun(TreeNode* root, int target, vector<int>&res, vector<vector<int>> & ans){
        if(root==NULL){
            return;
        }
        target-=root->val;
        res.push_back(root->val);
        if(root->left==NULL and root->right==NULL){
            if(target==0) ans.push_back(res);
        }
        fun(root->left, target, res, ans);
        fun(root->right, target, res, ans);
        res.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return {};
       vector<int> res;
       vector<vector<int>> ans;
       fun(root, targetSum, res, ans);
       return ans;
    }
};