class Solution(object):
	"""docstring for Solution"""	
	def SingleNumber(self, lst):
		start = 0
		for item in lst:
			start = start^item
		return start


