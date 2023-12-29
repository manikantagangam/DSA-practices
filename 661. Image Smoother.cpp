class Solution
{
public:
    vector<vector<int>> imageSmoother(vector<vector<int>> &img)
    {
        int rows = img.size(), cols = img[0].size();

        vector<vector<int>> ans(rows, vector<int>(cols, 0));

        for (int r = 0; r < rows; r++)
        {
            for (int c = 0; c < cols; c++)
            {
                int total = 0, count = 0;
                for (int i = r - 1; i < r + 2; i++)
                {
                    for (int j = c - 1; j < c + 2; j++)
                    {
                        if (i < 0 || i == rows || j < 0 || j == cols)
                        {
                            continue;
                        }
                        total += img[i][j];
                        count++;
                    }
                }
                ans[r][c] = total / count;
            }
        }
        return ans;
    }
};