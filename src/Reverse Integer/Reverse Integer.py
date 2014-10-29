class Solution:
	# @return an integer
	def reverse(self, x):
		ret = "-" if x < 0 else ""
        return int(ret+str(abs(x))[::-1])
