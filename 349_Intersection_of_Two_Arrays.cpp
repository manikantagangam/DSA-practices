#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution
{
public:
    vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
    {
        unordered_set<int> s{nums1.begin(), nums1.end()};
        vector<int> ans;
        for (int n : nums2)
            if (s.erase(n))
                ans.push_back(n);
        return ans;
    }
};

int main()
{
    Solution solution;
    vector<int> nums1 = {1, 2, 2, 1};
    vector<int> nums2 = {2, 2};
    vector<int> ans = solution.intersection(nums1, nums2);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}