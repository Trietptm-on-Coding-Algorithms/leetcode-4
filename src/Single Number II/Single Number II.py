class Solution:
	# @param A, a list of integer
	# @return an integer
	def singleNumber(self, A):
		return (3*sum(set(A)) - sum(A))>>1

