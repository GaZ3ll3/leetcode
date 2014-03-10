#include "../common/leetcode.h"

class Solution {
public:
  int maxDepth(TreeNode *root) { // to be edited here
    int res_l, res_r;
    if (!root) return 0;
    res_l = 1 + maxDepth(root->left);
    res_r = 1 + maxDepth(root->right);
    return max(res_l,res_r);
    }
};
