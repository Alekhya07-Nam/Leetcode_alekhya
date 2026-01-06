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
    void traversalOrder(TreeNode* root,vector<int> &vec,queue<TreeNode*> &qu){
        if(root==NULL){
            return ;
        }
        else{
            qu.push(root);
            while(!qu.empty()){ 
                int s=0;
                int c=qu.size();
                for(int i=0;i<c;i++){
                    TreeNode* temp=qu.front();
                    s+=temp->val;
                    // cout<<s<<endl;
                    qu.pop();
                    if(temp->left!=NULL){
                        qu.push(temp->left);
                    }
                    if(temp->right!=NULL){
                        qu.push(temp->right);
                    }
                }
                vec.push_back(s);
            }
        }
    }
    int maxLevelSum(TreeNode* root) {
       vector<int>vec;
       queue<TreeNode*> qu;
       traversalOrder(root,vec,qu); 
       int m= *max_element(vec.begin(), vec.end());
       int idx;
       for(int i=0;i<vec.size();i++){
        if(vec[i]==m){
            idx=i;
            break;
        }
       }
       return idx+1;
    }
};