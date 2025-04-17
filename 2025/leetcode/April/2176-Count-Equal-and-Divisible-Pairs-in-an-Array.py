class Solution:
    def countPairs(self, nums, k) -> int:
        n = len(nums)

        p = 0

        for i in range(n):
            for j in range(i+1, n):
                if nums[i] == nums[j] and (i*j)%k == 0:
                    p +=1
        
        return p

if __name__ == '__main__':
    s = Solution()
    print(s.countPairs([3,1,2,2,2,1,3], 2))