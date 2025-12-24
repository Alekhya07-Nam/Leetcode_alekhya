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
    void fun(TreeNode* root, vector<int> &res, vector<vector<int>> &ans){
        if(root==NULL) return ;
        res.push_back(root->val);
        if(root->left==NULL and root->right==NULL) {
            ans.push_back(res);
        }
        fun(root->left, res, ans);
        fun(root->right, res, ans);
        res.pop_back();
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL) return {};
        vector<int> res;
        vector<vector<int>> ans;
        fun(root, res, ans);
        vector<string> vec;
        for(int i=0;i<ans.size();i++){
            string ss="";
            ss+=to_string(ans[i][0]);
            for(int j=1;j<ans[i].size();j++){
                ss+="->"+to_string(ans[i][j]);
            }
            vec.push_back(ss);
        }
        return vec;
    }
};