class Solution:
	# @param n, an integer
	# @return an integer
	def climbStairs(self, n):
		if n < 1: return 0
		if n <= 2: return n
		pre1, pre2, ret = 1, 2, 0
		for i in range(3, n+1):
			ret = pre1 + pre2
			pre1, pre2 = pre2, ret
		return ret
