class Solution:
    def maxScore(self, s: str) -> int:
        n = len(s)
        ans = 0
        for i in range(n-1):
            ans = max(ans, s[:i+1].count('0')+s[i+1:].count('1'))
        return ans