class Solution:
    def findDifferentBinaryString(self, nums) -> str:
        ans = ""

        for i, num in enumerate(nums):
            if num[i] == '0':
                ans += '1'
            else:
                ans += '0'
        
        return ans


if __name__ == "__main__":
    s = Solution()
    print(s.findDifferentBinaryString(["01","10"]))