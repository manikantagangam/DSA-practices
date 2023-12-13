class Solution
{
public:
    int numSpecial(vector<vector<int>> &mat)
    {
        int r = mat.size();
        int c = mat[0].size();

        vector<int> row(r);
        vector<int> col(c);

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (mat[i][j] == 1)
                {
                    row[i]++;
                    col[j]++;
                }
            }
        }

        int count = 0;
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (mat[i][j] == 1 && row[i] == 1 && col[j] == 1)
                {
                    count++;
                }
            }
        }

        return count;
    }
};