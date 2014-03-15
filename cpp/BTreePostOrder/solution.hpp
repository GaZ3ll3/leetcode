#include "../common/leetcode.h"

class Solution {
public:
    // root.left -> root.right -> root for recursive method
    vector<int> postorderTraversal(TreeNode *root) {
        vector<int> res;
        stack<TreeNode *> st;
        stack<int> out;
        if (!root) return res;
        st.push(root);
        while(!st.empty()){
            TreeNode *tmp = st.top();
            out.push(tmp->val);
            st.pop();
            if (tmp->left) st.push(tmp->left);
            if (tmp->right) st.push(tmp->right);
        }
        while (!out.empty()){
            res.push_back(out.top());
            out.pop();
        }
        return res;
    }
};
