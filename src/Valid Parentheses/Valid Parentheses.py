class Solution:
	# @return a boolean
	def isValid(self, s):
		dic = {')':'(', ']':'[', '}':'{'}
		stack = []

		for c in s:
			if c in dic:
				if len(stack) > 0 and stack[-1] == dic[c]:
					# stack not empty & last element has matched
					stack.pop()
				else:
					return False
			else:
				stack.append(c)
		# check if stack is empty or not, return True if stack is empty
		return not stack
