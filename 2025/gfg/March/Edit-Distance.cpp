class Solution
{
public:
    // Function to compute the edit distance between two strings
    int editDistance(string &s1, string &s2)
    {
        int m = s1.length();
        int n = s2.length();

        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 0; i < n + 1; i++)
        {
            dp[0][i] = i;
        }

        for (int i = 0; i < m + 1; i++)
        {
            dp[i][0] = i;
        }

        for (int i = 1; i < m + 1; i++)
        {
            for (int j = 1; j < n + 1; j++)
            {
                if (s1[i - 1] == s2[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = 1 + min(min(dp[i][j - 1], dp[i - 1][j]), dp[i - 1][j - 1]);
                }
            }
        }

        return dp[m][n];
    }
};