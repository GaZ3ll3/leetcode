import solution
import os, sys
leetlib = os.path.abspath('../common')
sys.path.append(leetlib)
import leetcode
from nose.tools import eq_


def test_singlenumber():
	lstA = [1,2,2,3,3,4,4,5,5,6,6,7,1] # output 7
 	lstB = [23,25,27,29,31,29,27,25,23] # output 31
	
	c = solution.Solution()

	eq_(c.SingleNumber(lstA), 7)
	eq_(c.SingleNumber(lstB), 31)

