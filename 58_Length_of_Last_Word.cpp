#include <iostream>
#include <string>
using namespace std;

class Solution
{
public:
    int lengthOfLastWord(string s)
    {
        int i = s.size() - 1;
        int len = 0;
        while (s[i] == ' ')
        {
            i--;
        }
        while (i >= 0 && s[i] != ' ')
        {
            len += 1;
            i--;
        }
        return len;
    }
};

int main()
{
    Solution s;
    cout << s.lengthOfLastWord("Hello World") << endl;
    return 0;
}