class Solution
{
public:
    int maxScore(string s)
    {
        int zeros = 0;
        int ones = count(s.begin(), s.end(), '1');
        int ans = 0;

        for (int i = 0; i <= s.size() - 2; i++)
        {
            if (s[i] == '0')
                zeros++;
            else
                ones--;

            ans = max(ans, zeros + ones);
        }

        return ans;
    }
};