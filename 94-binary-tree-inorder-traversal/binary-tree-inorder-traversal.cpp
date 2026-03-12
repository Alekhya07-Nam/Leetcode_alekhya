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
        void Travel(TreeNode* temp,vector<int> &v){
            if(temp){
                Travel(temp->left,v);
                v.push_back(temp->val);
                Travel(temp->right,v);
            }
        }
        vector<int> inorderTraversal(TreeNode* root) {
        TreeNode* temp=root;
        vector<int> v;
        Travel(temp,v);
        return v;
    }
};