class Solution
{
public:
    string destCity(vector<vector<string>> &paths)
    {
        unordered_set<string> s;

        for (auto i : paths)
        {
            s.insert(i[0]);
        }

        for (auto i : paths)
        {
            if (!s.count(i[1]))
            {
                return i[1];
            }
        }
        return "";
    }
};