# Brute Force Approach
# class Solution:
#     def waysToSplitArray(self, nums: List[int]) -> int:
#         ans = 0
#         for i in range(len(nums)-1):
#             if(sum(nums[:i+1]) >= sum(nums[i+1:])):
#                 ans+=1
        
#         return ans

class Solution:
    def waysToSplitArray(self, nums: List[int]) -> int:
        ans = 0
        r = sum(nums)
        l = 0

        for i in range(len(nums)-1):
            l += nums[i]
            r -= nums[i]
            
            ans += 1 if(l>=r) else 0

        return ans