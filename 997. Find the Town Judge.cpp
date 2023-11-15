class Solution
{
public:
    int findJudge(int n, vector<vector<int>> &trust)
    {
        vector<int> in(n), out(n);

        for (vector<int> edge : trust)
        {
            int start = edge[0] - 1;
            int end = edge[1] - 1;
            out[start]++;
            in[end]++;
        }

        for (int i = 0; i < n; i++)
        {
            if (in[i] == n - 1 && out[i] == 0)
                return i + 1;
        }

        return -1;
    }
};