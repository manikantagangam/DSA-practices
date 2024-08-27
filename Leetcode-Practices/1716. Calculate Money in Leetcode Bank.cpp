class Solution
{
public:
    int totalMoney(int n)
    {
        int day = 0;
        int deposit = 1;
        int ans = 0;

        while (day < n)
        {
            ans += deposit;
            deposit += 1;
            day += 1;

            if (day % 7 == 0)
            {
                deposit = 1 + (day / 7);
            }
        }

        return ans;
    }
};