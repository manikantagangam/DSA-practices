class Solution
{
public:
    vector<bool> kidsWithCandies(vector<int> &candies, int extraCandies)
    {
        vector<bool> ans;
        for (int i : candies)
        {
            if (i + extraCandies >= *max_element(candies.begin(), candies.end()))
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};