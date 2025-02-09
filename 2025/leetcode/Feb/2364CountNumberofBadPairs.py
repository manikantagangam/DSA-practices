class Solution:
    def countBadPairs(self, nums: List[int]) -> int:

        good_pairs = 0
        total_pairs = 0 # n*(n-1)/2

        count = defaultdict(int)

        for i in range(len(nums)):
            total_pairs += i
            good_pairs += count[nums[i]-i]
            count[nums[i]-i] += 1

        return total_pairs - good_pairs