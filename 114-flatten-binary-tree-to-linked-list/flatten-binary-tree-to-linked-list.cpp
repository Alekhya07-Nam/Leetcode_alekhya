class Solution {
public:
    void preOrder(TreeNode* root, vector<int>& vec) {
        if (root == NULL)
            return;

        vec.push_back(root->val);

        preOrder(root->left, vec);
        preOrder(root->right, vec);
    }

    void flatten(TreeNode* root) {
        if (root == NULL)
            return;

        vector<int> vec;
        preOrder(root, vec);

        TreeNode* curr = root;

        for (int i = 1; i < vec.size(); i++) {
            curr->left = NULL;
            curr->right = new TreeNode(vec[i]);
            curr = curr->right;
        }

        curr->left = NULL;
    }
};