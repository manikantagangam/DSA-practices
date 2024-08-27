class Solution
{
public:
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        unordered_map<int, int> mp;
        for (int i : nums)
        {
            mp[i]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;

        for (auto x : mp)
        {
            pq.push(make_pair(x.second, x.first));
            if (pq.size() > k)
            {
                pq.pop();
            }
        }

        vector<int> ans;
        while (!pq.empty())
        {
            pair<int, int> temp = pq.top();
            pq.pop();

            ans.push_back(temp.second);
        }

        return ans;
    }
};