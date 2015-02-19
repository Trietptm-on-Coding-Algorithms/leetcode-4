class Solution:
	# @param s, a string
	# @return a boolean
	def isPalindrome(self, s):
		real = ""
		for c in s:
			if c.isalpha():
				real += c.lower()
			elif c.isdigit():
				real += c
		return real==real[::-1]
