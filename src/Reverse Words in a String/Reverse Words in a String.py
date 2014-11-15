class Solution:
	# @param s, a string
	# @return a string
	def reverseWords(self, s):
		return ' '.join(c for c in reversed(s.split(" ")) if len(c) > 0)
