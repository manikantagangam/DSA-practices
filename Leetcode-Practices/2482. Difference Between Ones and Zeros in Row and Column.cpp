class Solution
{
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>> &grid)
    {
        int m = grid.size();    // rows
        int n = grid[0].size(); // columns

        vector<vector<int>> ans(m, vector<int>(n));

        vector<int> oner;
        vector<int> onec;

        for (vector<int> &row : grid)
        {
            oner.push_back(ranges::count(row, 1));
        }

        for (int j = 0; j < n; j++)
        {
            int ones = 0;
            for (int i = 0; i < m; i++)
            {
                ones += grid[i][j];
            }
            onec.push_back(ones);
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                ans[i][j] = oner[i] + onec[j] - (n - oner[i]) - (m - onec[j]);
            }
        }

        return ans;
    }
};