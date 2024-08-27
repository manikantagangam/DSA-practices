#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    string largestGoodInteger(string num)
    {
        string ans = "";

        for (int i = 0; i < num.size() - 2; i++)
        {
            if (num[i] == num[i + 1] && num[i] == num[i + 2])
            {
                ans = max(ans, num.substr(i, 3));
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    string num = "12344456777890";
    cout << s.largestGoodInteger(num) << endl;
    return 0;
}