# Input: arr[] = ["act", "god", "cat", "dog", "tac"]
# Output: [["act", "cat", "tac"], ["god", "dog"]]

import collections

class Solution:
	def groupAnagrams(self, arr):

		d = collections.defaultdict(list)

		for s in arr:
			key = "".join(sorted(s))
			d[key].append(s)

		return d.values()

arr = ["act", "god", "cat", "dog", "tac"]

s = Solution()
print(s.groupAnagrams(arr))