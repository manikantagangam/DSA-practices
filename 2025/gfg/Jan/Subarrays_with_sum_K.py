# Input: nums = [1,1,1], k = 2
# Output: 2

# Input: nums = [1,2,3], k = 3
# Output: 2

import collections
class Solution:
    def countSubarrays(self, arr, k):
        ans = 0
        prefix = 0
        count = collections.Counter({0:1})
        
        for n in arr:
            prefix += n
            ans += count[prefix-k]
            count[prefix]+=1
        
        return ans

arr = [1,2,3]
k = 3

s = Solution()
print(s.countSubarrays(arr, k))