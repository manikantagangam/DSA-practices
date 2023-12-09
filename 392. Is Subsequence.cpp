class Solution
{
public:
    bool isSubsequence(string s, string t)
    {
        int f = 0, l = 0;

        while (l < t.size())
        {
            if (s[f] == t[l])
            {
                f++;
            }
            l++;
        }

        if (f == s.size())
            return true;
        else
            return false;
    }
};