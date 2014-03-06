import solution
import leetcode

def main():
	lstA = ["10","6","9","3","+","-11","*","/","*","17","+","5","+"] # output 22
	lstB = ["-78","-33","196","+","-19","-","115","+","-","-99","/","-18","8","*","-86","-","-","16","/","26","-14","-","-","47","-","101","-","163","*","143","-","0","-","171","+","120","*","-60","+","156","/","173","/","-24","11","+","21","/","*","44","*","180","70","-40","-","*","86","132","-84","+","*","-","38","/","/","21","28","/","+","83","/","-31","156","-","+","28","/","95","-","120","+","8","*","90","-","-94","*","-73","/","-62","/","93","*","196","-","-59","+","187","-","143","/","-79","-89","+","-"] # output 165

	c = solution.Solution()

	leetcode.leettest(c.evalRPN(lstA) == 22)
	leetcode.leettest(c.evalRPN(lstB) == 165)


if __name__ == '__main__':
	main()
