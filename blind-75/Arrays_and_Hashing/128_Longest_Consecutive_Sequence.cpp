#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    int longestConsecutive(vector<int> &nums)
    {
        unordered_set<int> s(nums.begin(), nums.end());
        int longest = 0;
        for (auto x : s)
        {
            if (!s.count(x - 1))
            {
                int len = 1;
                while (s.count(x + len))
                {
                    len++;
                }
                longest = max(longest, len);
            }
        }
        return longest;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {100, 4, 200, 1, 3, 2};
    cout << s.longestConsecutive(nums) << endl;
    return 0;
}