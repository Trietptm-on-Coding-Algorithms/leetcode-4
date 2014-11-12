class Solution:
	# @param s, a string
	# @return a string
	def reverseWords(self, s):
		temp = s.split(" ")
		ret = ""
		first = True

		for c in reversed(temp):
			if len(c) > 0:
				if first == True:
					ret += c
					first = False
				else:
					ret += (' '+c)
		return ret
