class Solution:
	# @return a boolean
	def isPalindrome(self, x):
		return str(x) == ''.join(c for c in reversed(str(x)))
