// Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

// Example 1:
// Input:
// x = 5
// Output: 2
// Explanation: Since, 5 is not a perfect
// square, floor of square_root of 5 is 2.

// Example 2:
// Input:
// x = 4
// Output: 2
// Explanation: Since, 4 is a perfect
// square, so its square root is 2.

class Solution
{
public:
    long long int floorSqrt(long long int x)
    {
        // Your code goes here
        if (x == 0)
            return 0;
        int l = 1;
        int r = x;
        while (true)
        {
            int m = l + (r - l) / 2;
            if (m > x / m)
            {
                r = m - 1;
            }
            else
            {
                if (m + 1 > x / (m + 1))
                {
                    return m;
                }
                l = m + 1;
            }
        }
    }
};