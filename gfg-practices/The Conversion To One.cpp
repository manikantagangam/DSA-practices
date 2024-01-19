// You are given a number N. You need to convert it to 1 in minimum number of operations.
// The operations allowed are as follows:
// • If N is even then divide the number by 2.
// • If N is odd then you can either add 1 to it or subtract 1 from it.
// Using the above operations, find the minimum number of operations require to convert N to 1.

long long minOperations(long long n)
{
    // Your code here
    long long steps = 0;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
        }
        else
        {
            if (n == 3 || (n & 2) == 0)
            {
                n--;
            }
            else
            {
                n++;
            }
        }
        steps++;
    }
    return steps;
}