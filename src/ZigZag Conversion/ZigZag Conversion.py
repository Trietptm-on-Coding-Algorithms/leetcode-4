class Solution:
	# @return a string
		def convert(self, s, nRows):
			if nRows == 1 or nRows > len(s):
				return s

			arr = ["" for i in range(nRows)];
			row, step = 0, 1

			for c in s:
				if row == 0:
					step = 1
				elif row == nRows-1:
					step = -1
				arr[row] += c
				row += step

			return "".join(x for x in arr)
