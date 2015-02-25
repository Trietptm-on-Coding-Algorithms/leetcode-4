class Solution:
	# @param s, a string
	# @return an integer
	def lengthOfLastWord(self, s):
		for c in reversed(s.split(" ")):
			if len(c) > 0: return len(c)
		return 0  
