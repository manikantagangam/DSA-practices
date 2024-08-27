#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    vector<vector<int>> findMatrix(vector<int> &nums)
    {
        unordered_map<int, int> count;

        vector<vector<int>> ans;

        for (int n : nums)
        {
            int row = count[n];

            if (row == ans.size())
            {
                ans.push_back(vector<int>());
            }

            ans[row].push_back(n);
            count[n] += 1;
        }

        return ans;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    Solution *sol = new Solution();

    vector<vector<int>> ans = sol->findMatrix(nums);

    for (vector<int> row : ans)
    {
        for (int n : row)
        {
            cout << n << " ";
        }
        cout << endl;
    }

    return 0;
}