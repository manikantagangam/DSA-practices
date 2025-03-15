class Solution
{
public:
    int minCoins(vector<int> &coins, int sum)
    {
        vector<int> dp(sum + 1, INT_MAX);
        dp[0] = 0;

        for (int i = 0; i < coins.size(); i++)
        {
            for (int j = coins[i]; j <= sum; j++)
            {
                if (dp[j - coins[i]] != INT_MAX)
                {
                    dp[j] = min(dp[j], 1 + dp[j - coins[i]]);
                }
            }
        }

        return dp[sum] == INT_MAX ? -1 : dp[sum];
    }
};