import solution
import os, sys
leetlib = os.path.abspath('../common')
sys.path.append(leetlib)
import leetcode

from nose.tools import eq_

def test_maxDepth():
	
	root = leetcode.TreeNode(1);
	leaf_1 = leetcode.TreeNode(2);
	leaf_2 = leetcode.TreeNode(3);
	leaf_3 = leetcode.TreeNode(4);
	leaf_4 = leetcode.TreeNode(5);
	leaf_5 = leetcode.TreeNode(6);

	root.left = leaf_1;
	root.right = leaf_2;

	leaf_1.left = leaf_3;
	leaf_2.right = leaf_4;

	leaf_3.right = leaf_5;


	c = solution.Solution()
	
	eq_(c.maxDepth(root),4)
	eq_(c.maxDepth(leaf_3),2)
