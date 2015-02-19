class Solution:
	# @return an integer
	def romanToInt(self, s):
		ret, pre = 0, 'M', 
		rom = {'I':1, 'V':5, 'X':10, 'L':50, 'C':100, 'D':500, 'M':1000}
		for c in s:
			if rom[c] > rom[pre]:
				ret -= 2*rom[pre]
			ret += rom[c]
			pre = c
		return ret
