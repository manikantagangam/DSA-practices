class Solution:
    def countPairs(self, nums: List[int], target: int) -> int:
        l = 0 
        r = len(nums)-1
        ans = 0
        nums = sorted(nums)

        while(l<r):
            if(nums[l]+nums[r] >= target):
                r-=1
            else:
                ans += r-l
                l += 1
        
        return ans