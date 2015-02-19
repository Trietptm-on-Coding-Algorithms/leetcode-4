class Solution:
	# @return a string
	def __init__(self):
		one = ["I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"];
		ten = ["X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"];
		hundred = ["C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"];
		thousand = ["M", "MM", "MMM"];
		self.dic = {0:one, 1:ten, 2:hundred, 3:thousand}

	def intToRoman(self, num):
		ans_list = [ self.dic[index][int(c)-1] for index, c in enumerate(reversed(str(num))) if int(c) > 0 ]
		return ''.join(c for c in reversed(ans_list))
