class Solution:
	# @param prices, a list of integer
	# @return an integer
	def maxProfit(self, prices):
		return sum([prices[i]-prices[i-1] for i in xrange(1, len(prices)) if prices[i] > prices[i-1]])
