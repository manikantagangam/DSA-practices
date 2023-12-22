class Solution
{
public:
    int maxProductDifference(vector<int> &nums)
    {
        int max1 = INT_MIN, max2 = INT_MIN;
        int min1 = INT_MAX, min2 = INT_MAX;

        for (auto n : nums)
        {
            if (n > max2)
            {
                if (n > max1)
                {
                    max2 = max1;
                    max1 = n;
                }
                else
                {
                    max2 = n;
                }
            }
            if (n < min2)
            {
                if (n < min1)
                {
                    min2 = min1;
                    min1 = n;
                }
                else
                {
                    min2 = n;
                }
            }
        }

        return (max1 * max2) - (min1 * min2);
    }
};