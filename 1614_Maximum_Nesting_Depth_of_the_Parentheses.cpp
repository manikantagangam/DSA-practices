#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxDepth(string s)
    {
        int res = 0;
        int opened = 0;
        for (char c : s)
        {
            if (c == '(')
            {
                res = max(res, ++opened);
            }
            else if (c == ')')
            {
                --opened;
            }
        }
        return res;
    }
};

int main()
{
    Solution obj;
    string s = "(1+(2*3)+((8)/4))+1";
    cout << obj.maxDepth(s) << endl;
    return 0;
}