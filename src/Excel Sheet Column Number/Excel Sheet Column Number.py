class Solution:
	# @param s, a string
	# @return an integer
	def titleToNumber(self, s):
		sum, cur = 0, 1
		for c in reversed(s):
			sum += cur * (ord(c)-64)
			cur *= 26
		return sum
