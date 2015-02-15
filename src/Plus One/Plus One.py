class Solution:
	# @param digits, a list of integer digits
	# @return a list of integer digits
	def plusOne(self, digits):
		num = 0 
		for i in digits:
			num = 10 * num + i 
		return [int(i) for i in str(num+1)]
