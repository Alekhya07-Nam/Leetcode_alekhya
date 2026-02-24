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
    int dfs(TreeNode* node, int cur){
        if(node==NULL) return 0;
        cur=cur*2+node->val;
        if(node->left==NULL and node->right==NULL) return cur;
        int l=dfs(node->left, cur);
        int r=dfs(node->right, cur);
        return l+r;
    }
    int sumRootToLeaf(TreeNode* root) {
        return dfs(root, 0);
    }
};