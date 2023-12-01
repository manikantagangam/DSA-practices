class Solution
{
public:
    char findTheDifference(string s, string t)
    {
        char ans = 0;
        for (char c : s)
        {
            ans = ans ^ c;
        }
        for (char d : t)
        {
            ans = ans ^ d;
        }
        return ans;
    }
};