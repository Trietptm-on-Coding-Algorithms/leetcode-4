class Solution:
	# @param version1, a string
	# @param version2, a string
	# @return an integer
	def compareVersion(self, version1, version2):
		group1 , group2 = version1.split('.'), version2.split('.')
		group1_size, group2_size, pos = len(group1), len(group2), 0
		for v1, v2 in zip(group1, group2):
			pos += 1
			if int(v1) > int(v2):
				return 1
			elif int(v1) < int(v2):
				return -1
			else:
				if pos == group1_size and pos == group2_size:
					return 0
				elif pos == group1_size: 
					#version1 end first
					# if 1.0 v.s. 1 , return 0
					return 0 if int(group2[pos]) == 0 else -1
				elif pos == group2_size: 
					return 0 if int(group1[pos]) == 0 else 1
