class Solution
{
public:
    vector<int> evenOddBit(int n)
    {
        vector<int> ans(2);
        int i = 0;

        while (n > 0)
        {
            ans[i] += n & 1;
            n = n >> 1;
            i = i ^ 1;
        }

        return ans;
    }
};