#include "../common/leetcode.h"

// non-recursive
class Solution {
public:
    // vector<int> res;
    vector<int> preorderTraversal(TreeNode *root) {
        // if (!root) return res;
        // if (root) res.push_back(root->val);
        // if (root->left) preorderTraversal(root->left);
        // if (root->right) preorderTraversal(root->right);
        // return res;
        vector<int> res;
        stack<TreeNode *> st;
        if (!root) return res;
        st.push(root);
        while(!st.empty()){
            TreeNode *tmp = st.top();
            res.push_back(tmp->val);
            st.pop();
            if (tmp->right) st.push(tmp->right);
            if (tmp->left) st.push(tmp->left);
        }
        return res;
    }
};
