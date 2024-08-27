#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int strStr(string haystack, string needle)
    {
        int m = haystack.length();
        int n = needle.length();

        for (int i = 0; i < m - n + 1; i++)
        {
            if (haystack.substr(i, n) == needle)
            {
                return i;
            }
        }
        return -1;
    }
};

int main()
{
    Solution a;
    string haystack = "hello";
    string needle = "ll";
    cout << a.strStr(haystack, needle) << endl;
    return 0;
}