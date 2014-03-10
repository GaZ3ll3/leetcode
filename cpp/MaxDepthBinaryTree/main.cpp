#include "solution.hpp"

int main(){
	
	TreeNode T_1 = TreeNode(1);
	TreeNode T_2 = TreeNode(2);
	TreeNode T_3 = TreeNode(3);
	TreeNode T_4 = TreeNode(4);
	TreeNode T_5 = TreeNode(5); 
	TreeNode T_6 = TreeNode(6);

	T_1.left = &T_2;
	T_1.right = &T_3;
	T_2.left = &T_4;
	T_3.right = &T_5;
	T_4.left = &T_6;

  	Solution sol;

  	leettest(sol.maxDepth(&T_1) == 4);
  	leettest(sol.maxDepth(&T_3) == 2);

  return 0;
}
