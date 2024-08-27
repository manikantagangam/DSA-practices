#include <set>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool isHappy(int n)
    {
        set<int> visit;

        while (visit.count(n) == 0)
        {
            visit.insert(n);
            n = sumOfSquares(n);

            if (n == 1)
                return true;
        }

        return false;
    }

    int sumOfSquares(int n)
    {
        int output = 0;

        while (n)
        {
            int digit = n % 10;
            digit = digit * digit;
            output += digit;
            n = n / 10;
        }

        return output;
    }
};

int main()
{
    Solution s;
    int n = 2;
    cout << s.isHappy(n) << endl;
}