class Solution
{
public:
    int maxProduct(vector<int> &nums)
    {
        int f = INT_MIN;
        int s = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] >= f)
            {
                s = f;
                f = nums[i];
            }
            if (nums[i] > s && nums[i] < f)
            {
                s = nums[i];
            }
        }
        return (f - 1) * (s - 1);
    }
};