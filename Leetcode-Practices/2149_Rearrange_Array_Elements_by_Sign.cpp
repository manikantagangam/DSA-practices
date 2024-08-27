#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> ans(nums.size(), 0);
        int i = 0, j = 1;
        for (int k = 0; k < nums.size(); k++)
        {
            if (nums[k] > 0)
            {
                ans[i] = nums[k];
                i += 2;
            }
            else
            {
                ans[j] = nums[k];
                j += 2;
            }
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    vector<int> nums = {1, 2, 3, -4, -1, 4};
    vector<int> ans = obj.rearrangeArray(nums);
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}