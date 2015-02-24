class Solution:
	# @param A  a list of integers
	# @param m  an integer, length of A
	# @param B  a list of integers
	# @param n  an integer, length of B
	# @return nothing
	def merge(self, A, m, B, n):
		now, index1, index2 = m+n-1, m-1, n-1
		while index1 >= 0 and index2 >= 0:
			if A[index1] >= B[index2]:
				A[now] = A[index1]
				index1 -= 1
			else:
				A[now] = B[index2]
				index2 -= 1
			now -= 1
		# A remain same so not need to operate 
		if index2 >= 0: 
			A[:index2+1] = B[:index2+1]
