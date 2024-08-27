#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    string firstPalindrome(vector<string> &words)
    {
        for (auto i : words)
        {
            string s = i;
            reverse(s.begin(), s.end());
            if (s == i)
                return s;
        }
        return "";
    }
};

int main()
{
    Solution s;
    vector<string> words = {"abcd", "dcba", "lls", "s", "sssll"};
    cout << s.firstPalindrome(words) << endl;
    return 0;
}