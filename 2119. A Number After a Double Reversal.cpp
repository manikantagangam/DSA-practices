class Solution
{
public:
    bool isSameAfterReversals(int num)
    {
        int r1 = reverse(num);
        int r2 = reverse(r1);
        return num == r2;
    }

    int reverse(int n)
    {
        int reverse = 0;
        while (n > 0)
        {
            reverse = reverse * 10 + n % 10;
            n = n / 10;
        }
        return reverse;
    }
};