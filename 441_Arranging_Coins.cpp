#include <iostream>
using namespace std;

class Solution
{
public:
    int arrangeCoins(long n)
    {
        return (-1 + sqrt(8 * n + 1)) / 2;
    }
};

int main()
{
    Solution sol;
    cout << sol.arrangeCoins(5) << endl;
    cout << sol.arrangeCoins(8) << endl;
    cout << sol.arrangeCoins(10) << endl;
    cout << sol.arrangeCoins(1804289383) << endl;
    return 0;
}