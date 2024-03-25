#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        for (int i : nums)
        {
            i = abs(i);
            if (nums[i - 1] < 0)
            {
                ans.push_back(i);
            }
            else
            {
                nums[i - 1] = -1 * nums[i - 1];
            }
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = s.findDuplicates(nums);
    for (auto i : ans)
    {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}