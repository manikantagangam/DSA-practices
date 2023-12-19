class Solution
{
public:
    int romanToInt(string s)
    {
        unordered_map<char, int> c = {{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
        int ans = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (c[s[i]] < c[s[i + 1]])
                ans -= c[s[i]];
            else
                ans += c[s[i]];
        }
        return ans;
    }
};