class Solution:
	# @return a list of lists of integers
	def generate(self, numRows):
		ret = [[1] for i in range(numRows) ]
		if numRows == 1: return ret 

		for i in range(1, numRows):
			for j in range(1, i+1):
				if j == i: ret[i].append(1)
				else: ret[i].append( ret[i-1][j-1] + ret[i-1][j] )
		return ret 
