class Solution:
	# @param board, a 9x9 2D array
	# @return a boolean
	def isValidSudoku(self, board):
		# xrange() is faster than range()
		for row in xrange(9):
			check = {}
			for col in xrange(9):
				c = board[row][col]
				if c != '.':
					if c in check: return False
					else: check[c] = True

		for col in xrange(9):
			check = {}
			for row in xrange(9):
				c = board[row][col]
				if c != '.':
					if c in check: return False
					else: check[c] = True

		for row in [0,3,6]:
			for col in [0,3,6]:
				check = {}
				for i in [0,1,2]:
					for j in [0,1,2]:
						c = board[row+i][col+j]
						if c != '.':
							if c in check: return False
							else: check[c] = True
		return True
