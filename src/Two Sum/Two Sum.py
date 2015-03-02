class Solution:
	# @return a tuple, (index1, index2)
	def twoSum(self, num, target):
		d={}
		for index, val in enumerate(num):
			if val in d: return (d[val], index+1)
			d[target-val] = index+1
