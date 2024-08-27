class Solution
{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches)
    {
        map<int, int> mp;

        for (auto i : matches)
        {
            mp[i[1]]++;
        }

        vector<int> l, w;

        for (int i = 0; i < matches.size(); i++)
        {
            if (mp[matches[i][1]] == 1)
            {
                l.push_back(matches[i][1]);
                mp[matches[i][1]] = INT_MAX;
            }
            if (mp.find(matches[i][0]) == mp.end())
            {
                w.push_back(matches[i][0]);
                mp[matches[i][0]] = INT_MAX;
            }
        }

        sort(l.begin(), l.end());
        sort(w.begin(), w.end());

        return {w, l};
    }
};