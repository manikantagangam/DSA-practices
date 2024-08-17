// You are given a number N. You need to find the perfect square that is nearest to it. If two perfect squares are at the same distance to N, then print the greater perfect square.
// Note: If N is a perfect square, then you need to consider perfect squares that are not N and are nearest to it.
// Input Format:
// The first line of input contains T denoting the number of testcases. T testcases follow. Each testcase contains one line of input containing N.
// Output Format:
// For each testcase, in a new line, print the perfect square closest to N.

// Examples:
// Input:
// 3
// 1
// 56
// 100
// Output:
// 49
// 81

long long nearestPerfectSquare(long long n)
{
    long long sqrtN = sqrt(n);

    long long lowerSquare = sqrtN * sqrtN;
    long long upperSquare = (sqrtN + 1) * (sqrtN + 1);

    if (lowerSquare == n)
    {
        return (sqrtN - 1) * (sqrtN - 1);
    }

    long long distanceToLower = n - lowerSquare;
    long long distanceToUpper = upperSquare - n;

    if (distanceToLower <= distanceToUpper)
    {
        return lowerSquare;
    }
    else
    {
        return upperSquare;
    }
}