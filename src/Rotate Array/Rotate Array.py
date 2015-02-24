class Solution:
	# @param nums, a list of integer
	# @param k, num of steps
	# @return nothing, please modify the nums list in-place.
	def rotate(self, nums, k):
		n=len(nums)
		if not k or not k%n: return
		k%=n
		for index,c in enumerate( nums[-k:] + nums[:n-k] ):
			nums[index]=c 
