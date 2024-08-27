#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    string frequencySort(string s)
    {
        unordered_map<char, int> freq;
        for (char c : s)
        {
            freq[c]++;
        }
        priority_queue<pair<int, char>> pq;
        for (auto it : freq)
        {
            pq.push({it.second, it.first});
        }
        string res = "";
        while (!pq.empty())
        {
            auto p = pq.top();
            pq.pop();
            res += string(p.first, p.second);
        }
        return res;
    }
};

int main()
{
    Solution s;
    string str = "tree";
    cout << s.frequencySort(str) << endl;
    return 0;
}