#include <iostream>
#include <vector>
#include <stack>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int n = temperatures.size();
        vector<int> ans(temperatures.size(), 0);
        stack<pair<int, int>> s;

        for (int i = 0; i < n; i++)
        {
            while (!s.empty() && temperatures[i] > s.top().first)
            {
                int temp = s.top().first;
                int index = s.top().second;
                s.pop();
                ans[index] = (i - index);
            }
            s.push({temperatures[i], i});
        }
        return ans;
    }
};

int main()
{
    vector<int> v = {73, 74, 75, 71, 69, 72, 76, 73};
    Solution s;
    vector<int> result = s.dailyTemperatures(v);
    for (int i : result)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}