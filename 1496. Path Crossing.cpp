class Solution
{
public:
    bool isPathCrossing(string path)
    {
        set<pair<int, int>> visit;
        int x = 0, y = 0;

        for (auto c : path)
        {
            visit.insert({x, y});
            if (c == 'N')
                y++;
            else if (c == 'S')
                y--;
            else if (c == 'E')
                x++;
            else if (c == 'W')
                x--;

            if (visit.count({x, y}) > 0)
                return true;
        }

        return false;
    }
};