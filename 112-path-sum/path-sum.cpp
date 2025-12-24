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
    bool fun(TreeNode* root, int targetSum, int sum){
        if(root==NULL) return false;
        sum+=root->val;
        if(sum==targetSum and root->left==NULL and root->right==NULL){
            return true;
        }
        bool l=false, r=false;
        if(root->left!=NULL) l=fun(root->left, targetSum, sum);
        if(root->right!=NULL) r=fun(root->right, targetSum, sum);
        return l||r;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        int sum=0;
        return fun(root, targetSum,sum);
    }
};