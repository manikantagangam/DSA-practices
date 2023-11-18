class Solution
{
public:
    int distanceBetweenBusStops(vector<int> &distance, int start, int destination)
    {
        int total = 0;
        for (int j = 0; j < distance.size(); j++)
        {
            total += distance[j];
        }
        int ans = 0;
        if (start > destination)
        {
            int tmp = start;
            start = destination;
            destination = tmp;
        }
        for (int i = start; i < destination; i++)
        {
            ans += distance[i];
        }

        ans = min(ans, total - ans);

        return ans;
    }
};