#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to find the nth fibonacci number using top-down approach.
    long long findNthFibonacci(int number, long long int dp[])
    {
        // Your Code Here
        if (dp[number] == 0)
        {
            if (number == 0 || number == 1)
            {
                dp[number] = number;
            }
            else
            {
                dp[number] = findNthFibonacci(number - 1, dp) + findNthFibonacci(number - 2, dp);
            }
        }
        return dp[number];
    }
};

int main()
{
    int number;
    cin >> number;
    long long int dp[number + 1] = {0};
    Solution obj;
    cout << obj.findNthFibonacci(number, dp) << endl;
    return 0;
}