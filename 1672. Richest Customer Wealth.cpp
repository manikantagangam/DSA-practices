class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int n = 0;
        for (auto &v : accounts)
        {
            n = max(n, accumulate(v.begin(), v.end(), 0));
        }
        return n;
    }
};