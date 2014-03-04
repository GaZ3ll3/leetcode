import solution
import leetcode

def main():
	lstA = [1,2,2,3,3,4,4,5,5,6,6,7,1] # output 7
 	lstB = [23,25,27,29,31,29,27,25,23] # output 31
	
	c = solution.Solution()

	leetcode.leettest(c.SingleNumber(lstA) == 7)
	leetcode.leettest(c.SingleNumber(lstB) == 31)


if __name__ == '__main__':
	main()