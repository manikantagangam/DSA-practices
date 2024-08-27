class Solution
{
public:
    vector<int> leftRightDifference(vector<int> &nums)
    {
        const int n = nums.size();
        vector<int> ans(n);
        vector<int> leftSum(n);
        vector<int> rightSum(n);
        int p = 0;
        int s = 0;

        for (int i = 0; i < n; i++)
        {
            if (i > 0)
            {
                p += nums[i - 1];
            }
            leftSum[i] = p;
        }

        for (int i = n - 1; i >= 0; i--)
        {
            if (i + 1 < n)
            {
                s += nums[i + 1];
            }
            rightSum[i] = s;
        }

        for (int i = 0; i < n; i++)
        {
            ans[i] = abs(leftSum[i] - rightSum[i]);
        }

        return ans;
    }
};