#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int maxFrequencyElements(vector<int> &nums)
    {
        map<int, int> m;
        for (auto i : nums)
            m[i]++;

        int mx = -1;
        for (auto i : m)
        {
            mx = max(i.second, mx);
        }

        int ans = 0;
        for (auto i : m)
        {
            if (i.second == mx)
                ans += i.second;
        }
        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 8, 3, 2, 2, 2, 5, 1};
    cout << s.maxFrequencyElements(nums) << endl;
    return 0;
}