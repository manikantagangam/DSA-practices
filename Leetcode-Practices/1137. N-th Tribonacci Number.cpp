class Solution
{
public:
    int tribonacci(int n)
    {
        vector<int> t = {0, 1, 1};

        if (n < 3)
            return t[n];

        for (int i = 3; i < n + 1; i++)
        {
            int temp = t[2];
            t[2] = accumulate(t.begin(), t.end(), 0);
            t[0] = t[1];
            t[1] = temp;
        }

        return t[2];
    }
};