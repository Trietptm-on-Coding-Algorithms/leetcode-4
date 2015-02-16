class Solution:
	# @return a string
	def countAndSay(self, n):
		if n == 1: 
			return "1"
		pre, cur = "1", ""
		for i in range(2, n+1, 1):
			pre_char, cnt = pre[0], 0
			pre += '#'
			for c in pre:
				if c == pre_char:
					cnt += 1
				else:
					cur += str(cnt) + pre_char
					pre_char, cnt = c, 1
			pre , cur = cur, ""
		return pre
