#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int numSubarraysWithSum(vector<int> &nums, int goal)
    {
        int ans = 0;
        int prefix = 0;
        unordered_map<int, int> count{{0, 1}};

        for (const int num : nums)
        {
            prefix += num;
            if (const auto it = count.find(prefix - goal); it != count.cend())
                ans += it->second;
            ++count[prefix];
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 0, 1, 0, 1};
    int goal = 2;
    cout << s.numSubarraysWithSum(nums, goal) << endl;
    return 0;
}