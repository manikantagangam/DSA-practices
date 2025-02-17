# Naive Approach

class Solution:
	def kLargest(self, arr, k):
		arr = sorted(arr, reverse=True)
		return arr[:k]
	
s = Solution()

print(s.kLargest([1, 2, 3, 4, 5], 3))

