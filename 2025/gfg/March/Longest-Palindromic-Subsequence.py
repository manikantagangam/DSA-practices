class Solution:

    def longestPalinSubseq(self, s):
        s1 = s[::-1]
        
        m = len(s)
        n = len(s1)
        
        dp = [[0 for _ in range(n+1)] for _ in range(m+1)]
        
        for i in range(n+1):
            dp[0][i] = 0
        
        for i in range(m+1):
            dp[i][0] = 0
        
        for i in range(1, m+1):
            for j in range(1, n+1):
                if s[i-1] == s1[j-1]:
                    dp[i][j] = 1 + dp[i-1][j-1]
                else:
                    dp[i][j] = max(dp[i][j-1], dp[i-1][j])
        
        return dp[m][n]