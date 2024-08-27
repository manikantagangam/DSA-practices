#include <iostream>
using namespace std;

class Solution
{
public:
    int maxNumberOfBalloons(string text)
    {
        unordered_map<char, int> balloon = {{'b', 1}, {'a', 1}, {'l', 2}, {'o', 2}, {'n', 1}};
        unordered_map<char, int> mp;
        for (auto ch : text)
        {
            mp[ch]++;
        }

        int ans = text.size();
        for (auto c : balloon)
        {
            ans = min(ans, mp[c.first] / c.second);
        }
        return ans;
    }
};

int main()
{
    Solution s;
    cout << s.maxNumberOfBalloons("nlaebolko") << endl;
    return 0;
}