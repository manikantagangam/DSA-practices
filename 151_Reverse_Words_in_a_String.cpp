#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Solution
{
public:
    string reverseWords(string s)
    {
        stringstream str(s);
        string st;
        string st1;
        while (str >> st)
        {
            if (st1 != "")
                st1 = st + " " + st1;
            else
                st1 = st + st1;
        }
        return st1;
    }
};

int main()
{
    Solution solution;
    string s = "the sky is blue";
    cout << solution.reverseWords(s) << endl;
    return 0;
}