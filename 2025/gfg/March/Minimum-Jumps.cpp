/*
Question link:

https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

*/

class Solution
{
public:
    int minJumps(vector<int> &arr)
    {

        int ans = 0;
        int l, r;
        l = 0, r = 0;

        while (r < arr.size() - 1)
        {
            int farthest = 0;

            for (int i = l; i <= r; i++)
            {
                farthest = max(farthest, i + arr[i]);
            }

            l = r + 1;
            r = farthest;
            ans += 1;
        }
        return ans;
    }
};