#include <iostream>
#include <vector>
#include <set>
#include <numeric>
using namespace std;

class Solution
{
public:
    int singleNumber(vector<int> &nums)
    {
        set<int> s(nums.begin(), nums.end());

        long long x = 3 * accumulate(s.begin(), s.end(), 0LL);
        long long y = accumulate(nums.begin(), nums.end(), 0LL);

        return (x - y) / 2;
    }
};

int main()
{
    Solution s;
    vector<int> nums = {2, 2, 3, 2};
    cout << s.singleNumber(nums) << endl;
    return 0;
}