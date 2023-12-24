#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int minOperations(string s)
    {
        int count = 0;

        for (int i = 0; i < s.size(); i++)
        {
            if (i % 2)
            {
                if (s[i] == '0')
                    count++;
            }
            else
            {
                if (s[i] == '1')
                    count++;
            }
        }

        return min(count, static_cast<int>(s.size()) - count);
    }
};

int main()
{
    Solution solution;
    string s = "1111";
    cout << solution.minOperations(s) << endl;
    return 0;
}