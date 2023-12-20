class Solution
{
public:
    int buyChoco(vector<int> &prices, int money)
    {
        int m1 = INT_MAX;
        int m2 = INT_MAX;

        for (auto i : prices)
        {
            if (i < m1)
            {
                m2 = m1;
                m1 = i;
            }
            else if (i < m2)
            {
                m2 = i;
            }
        }

        if (m1 + m2 > money)
            return money;
        else
            return money - m1 - m2;
    }
};