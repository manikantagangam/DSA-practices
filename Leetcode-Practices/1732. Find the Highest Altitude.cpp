class Solution
{
public:
    int largestAltitude(vector<int> &gain)
    {
        int h = 0, a = 0;
        for (int i : gain)
            a = max(a, h += i);
        return a;
    }
};