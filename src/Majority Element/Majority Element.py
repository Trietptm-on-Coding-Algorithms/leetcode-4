class Solution:
	# @param num, a list of integers
	# @return an integer
	def majorityElement(self, num):
		cnt={}
		for c in num:
			if c in cnt:
				cnt[c] += 1
			else:
				cnt[c] = 1
			if cnt[c] > len(num)/2:
				return c
