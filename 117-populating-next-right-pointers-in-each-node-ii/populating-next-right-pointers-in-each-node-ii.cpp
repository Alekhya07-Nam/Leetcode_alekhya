/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL){
            return 0;
        }
        queue<Node*> que;
        que.push(root);
        int l=0;
        vector<vector<Node*>> vec;
        while(!que.empty()){
            int n=que.size();
            vec.push_back({});
            for(int i=0;i<n;i++){
                Node* temp= que.front();
                que.pop();
                vec[l].push_back(temp);
                if(temp->left){
                    que.push(temp->left);
                }
                if(temp->right){
                    que.push(temp->right);
                }
            }
            l++;
        }
        Node* var;
        for(int i=0;i<vec.size();i++){
            var=vec[i][0];
            for(int j=1;j<vec[i].size();j++){
                var->next=vec[i][j];
                var=vec[i][j];
            }
            var->next=NULL;
        }
        return root;
    }
};