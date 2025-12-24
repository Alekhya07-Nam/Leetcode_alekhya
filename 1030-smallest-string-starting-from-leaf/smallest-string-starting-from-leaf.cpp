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
    void fun(TreeNode* root, string &temp, string &ans){
        if(root==NULL) return ;
        char a= char('a' + root->val);
        temp+=a;
        if(root->left==NULL and root->right==NULL){
            reverse(temp.begin(), temp.end());
            if(ans.empty() || ans>temp){
                ans=temp;
            }
            reverse(temp.begin(), temp.end());
        }
        fun(root->left, temp, ans);
        fun(root->right, temp, ans);
        temp.pop_back();
    }
    string smallestFromLeaf(TreeNode* root) {
        if(root==NULL) return "";
        string ans;
        string temp="";
        fun(root, temp, ans);
        return ans;
    }
};