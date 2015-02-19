class Solution:
	# @return a string
	def longestCommonPrefix(self, strs):
		if not strs: return ""
		if len(strs) == 1: return strs[0]
	
		s1, s2 = min(strs), max(strs)
		for index, c in enumerate(s1):
			if s2[index] != c: return s1[:index:]
		return s1
