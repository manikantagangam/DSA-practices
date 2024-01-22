class Solution
{
public:
    vector<int> findErrorNums(vector<int> &nums)
    {
        int N = nums.size();
        long long x = 0, y = 0;

        for (int i = 1; i < N + 1; i++)
        {
            x += nums[i - 1] - i;
            y += (long long)nums[i - 1] * nums[i - 1] - i * i;
        }

        int missing = (y - x * x) / (2 * x);
        int duplicate = missing + x;

        return {duplicate, missing};
    }
};