class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        int range1 = helper(nums, 0, n - 2);
        int range2 = helper(nums, 1, n - 1);

        if (n == 1)
        {
            return nums[0];
        }

        return max(range1, range2);
    }

    int helper(vector<int> &nums, int start, int end)
    {
        int rob1 = 0, rob2 = 0, temp;

        for (int i = start; i <= end; i++)
        {
            temp = max(nums[i] + rob1, rob2);
            rob1 = rob2;
            rob2 = temp;
        }

        return rob2;
    }
};