class Solution:
	# @return a string
	def convertToTitle(self, num):
		ret = ""
		while num:
			ret = chr( ( (num-1) % 26 ) + 65 )+ ret
			num = (num - 1) / 26
		return ret
