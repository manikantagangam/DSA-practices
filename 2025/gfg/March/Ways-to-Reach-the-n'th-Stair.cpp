class Solution
{
public:
    int countWays(int n)
    {
        // your code here
        int first = 1;
        int second = 1;
        int temp;

        for (int i = 0; i < n - 1; i++)
        {
            temp = first;
            first = first + second;
            second = temp;
        }

        return first;
    }
};