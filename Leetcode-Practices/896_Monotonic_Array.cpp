#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isMonotonic(vector<int> &nums)
    {
        bool in = true;
        bool dc = true;

        for (int i = 1; i < nums.size(); i++)
        {
            in &= nums[i] >= nums[i - 1];
            dc &= nums[i] <= nums[i - 1];
        }

        return in || dc;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {1, 2, 2, 3};
    cout << s.isMonotonic(nums) << endl;
    return 0;
}