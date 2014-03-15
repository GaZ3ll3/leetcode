class Solution:
    # @param 
    # @return 
    def SingleNumber(self, lst):
	one,two,three = 0,0,0
	
	for i in range(len(lst)):
		two |= one & lst[i]
		one ^= lst[i]
		three = ~(one & two)
		one &= three
		two &= three
	return one
