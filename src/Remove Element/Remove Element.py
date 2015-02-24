class Solution:
	# @param    A       a list of integers
	# @param    elem    an integer, value need to be removed
	# @return an integer
	def removeElement(self, A, elem):
		index=0;
		for c in A:
			if c != elem:
				A[index] = c
				index+=1
		return index
