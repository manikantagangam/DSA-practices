#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    vector<int> findDisappearedNumbers(vector<int> &nums)
    {
        int i;
        for (int n : nums)
        {
            i = abs(n) - 1;
            nums[i] = -1 * abs(nums[i]);
        }

        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
                ans.push_back(i + 1);
        }

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {4, 3, 2, 7, 8, 2, 3, 1};
    vector<int> ans = s.findDisappearedNumbers(nums);
    for (int n : ans)
        cout << n << " ";
    cout << endl;
    return 0;
}