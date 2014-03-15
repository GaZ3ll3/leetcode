import solution
import os, sys
leetlib = os.path.abspath('../common')
sys.path.append(leetlib)
import leetcode
from nose.tools import eq_


def test_SingleNumber():
	c = solution.Solution()
	lstA = [2,2,2,3,3,3,4,4,5,5,6,6,1,1,1,4,5,7,6]
	eq_(c.SingleNumber(lstA),7)

	lstB = [1,2,3,1,2,3,1,2,4,5,6,4,5,6,4,5,6,3,3]
	eq_(c.SingleNumber(lstB),3)
