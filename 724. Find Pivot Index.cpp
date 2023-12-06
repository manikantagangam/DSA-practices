class Solution
{
public:
    int pivotIndex(vector<int> &nums)
    {
        int total = accumulate(nums.begin(), nums.end(), 0);
        int lSum = 0, rSum;
        for (int i = 0; i < nums.size(); i++)
        {
            rSum = total - lSum - nums[i];

            if (lSum == rSum)
                return i;

            lSum += nums[i];
        }
        return -1;
    }
};