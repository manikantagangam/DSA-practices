// Approach 1: Bitwise XOR Operation
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int ans = nums.size();
        for (int i = 0; i < nums.size(); i++)
        {
            ans = ans ^ (i ^ nums[i]);
        }
        return ans;
    }
};

// Approach 2: Sorting and Linear Search
class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        int c = 0;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] != c)
            {
                return c;
            }
            c += 1;
        }
        return c;
    }
};
