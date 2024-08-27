#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int minCost(string colors, vector<int> &neededTime)
    {
        int ans = 0, l = 0;

        for (int r = 1; r < colors.size(); r++)
        {
            if (colors[l] == colors[r])
            {
                if (neededTime[l] < neededTime[r])
                {
                    ans += neededTime[l];
                    l = r;
                }
                else
                {
                    ans += neededTime[r];
                }
            }
            else
            {
                l = r;
            }
        }
        return ans;
    }
};

int main()
{
    Solution s;
    string colors = "ababa";
    vector<int> neededTime = {10, 5, 10, 5, 10};
    cout << s.minCost(colors, neededTime) << endl;
    return 0;
}