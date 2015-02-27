class Solution:
	# @param A, a list of integer
	# @return an integer
	def singleNumber(self, A):
		for i in xrange(len(A)-1, -1, -1):
			if not i: return A[0]
			else: A[i-1] ^= A[i]
