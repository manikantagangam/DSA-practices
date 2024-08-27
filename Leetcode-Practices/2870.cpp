#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int minOperations(vector<int> &nums)
    {
        int ans = 0;

        unordered_map<int, int> mp;

        for (auto i : nums)
        {
            mp[i]++;
        }

        for (auto [_, f] : mp)
        {
            if (f == 1)
                return -1;

            ans += (f + 2) / 3;
        }
        return ans;
    }
};

int main()
{
    Solution sol;
    vector<int> nums = {1, 2, 3, 4, 5, 6};
    cout << sol.minOperations(nums) << endl;
    return 0;
}