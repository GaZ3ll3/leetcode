#include "solution.hpp"

int main(){

  Solution sol;
  TreeNode root = TreeNode(1);
  TreeNode lft = TreeNode(2);
  TreeNode rgt = TreeNode(3);
  TreeNode llft = TreeNode(4);
  TreeNode lrgt = TreeNode(5);

  root.left = &lft;
  root.right = &rgt;
  lft.left = &llft;
  lft.right = &lrgt;

  vector<int> result;
  int NumArray[] = {1,2,4,5,3};
  result =sol.preorderTraversal(&root);
  std::vector<int> exact (NumArray,NumArray + sizeof(NumArray)/ sizeof(int)) ;
  leettest(comp_vec(result,exact)==0);

  return 0;
}

