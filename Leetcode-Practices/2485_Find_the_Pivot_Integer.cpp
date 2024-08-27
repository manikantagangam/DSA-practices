#include <iostream>
#include <cmath>
using namespace std;

class Solution
{
public:
    int pivotInteger(int n)
    {
        int y = (n * n + n) / 2;
        int x = sqrt(y);
        return x * x == y ? x : -1;
    }
};

int main()
{
    int n = 10;
    Solution sol;
    cout << sol.pivotInteger(n) << endl;
    return 0;
}