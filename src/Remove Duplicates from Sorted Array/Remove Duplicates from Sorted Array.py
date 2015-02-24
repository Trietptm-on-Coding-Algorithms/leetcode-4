class Solution:
	# @param a list of integers
	# @return an integer
	def removeDuplicates(self, A):
		if len(A) < 2: return len(A)
		size, now = 1, A[0]
		for c in A:
			if c != now:
				A[size] = c
				size, now = size+1, c
		return size
