#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    vector<int> sortedSquares(vector<int> &nums)
    {
        vector<int> ans;
        int l = 0, r = nums.size() - 1;
        while (l <= r)
        {
            if (nums[l] * nums[l] > nums[r] * nums[r])
            {
                ans.push_back(nums[l] * nums[l]);
                l += 1;
            }
            else
            {
                ans.push_back(nums[r] * nums[r]);
                r -= 1;
            }
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {-4, -1, 0, 3, 10};
    vector<int> ans = obj.sortedSquares(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}