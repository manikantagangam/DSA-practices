#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char, char> st, ts;

        int n = s.size();

        for (int i = 0; i < n; i++)
        {
            char cs = s[i], ct = t[i];
            if (st.count(cs) == 0 && ts.count(ct) == 0)
            {
                st[cs] = ct;
                ts[ct] = cs;
            }
            else if (st[cs] != ct || ts[ct] != cs)
            {
                return false;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    cout << s.isIsomorphic("egg", "add") << endl;
    cout << s.isIsomorphic("foo", "bar") << endl;
    cout << s.isIsomorphic("paper", "title") << endl;
    cout << s.isIsomorphic("badc", "baba") << endl;
    return 0;
}