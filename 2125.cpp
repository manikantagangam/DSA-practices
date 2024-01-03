class Solution
{
public:
    int numberOfBeams(vector<string> &bank)
    {
        int prev = 0;
        int ans = 0;

        for (auto x : bank)
        {
            int cur = ranges::count(x, '1');
            if (cur)
            {
                ans += prev * cur;
                prev = cur;
            }
        }

        return ans;
    }
};