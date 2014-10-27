class Solution:
	# @return an integer
	def reverse(self, x):
		if x < 0:
			ret = "-"
		else:
			ret = ""
		
		for c in reversed(str(abs(x))):
			ret += c
		return int(ret)
