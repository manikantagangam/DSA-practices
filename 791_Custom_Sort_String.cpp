#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string customSortString(string order, string s)
    {
        string res;
        vector<int> count(128);

        for (char c : s)
            count[c]++;

        for (char c : order)
            while (count[c]-- > 0)
                res += c;

        for (char c = 'a'; c <= 'z'; ++c)
            while (count[c]-- > 0)
                res += c;

        return res;
    }
};

int main()
{
    Solution s;
    string order = "cba";
    string str = "abcd";
    cout << s.customSortString(order, str) << endl;
    return 0;
}