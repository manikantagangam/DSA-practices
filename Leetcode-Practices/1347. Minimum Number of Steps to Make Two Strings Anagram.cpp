class Solution
{
public:
    int minSteps(string s, string t)
    {
        vector<int> count(26);
        for (char c : s)
        {
            count[c - 'a']++;
        }
        int res = 0;
        for (char c : t)
        {
            if (--count[c - 'a'] < 0)
            {
                res += 1;
            }
        }
        return res;
    }
};