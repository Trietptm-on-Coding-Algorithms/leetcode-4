class Solution:
	# @return a list of integers
	def getRow(self, rowIndex):
	ret, pre = [ 1 for i in range(rowIndex+1) ], 1                         
	if rowIndex < 2 : return ret 
	
	for row in range(3, rowIndex+2):
		for i in range(1, row):
			temp = ret[i]
			if i == row-1 : ret[i] = 1 
			else: ret[i] = pre + ret[i]
			pre = temp
	return ret 
