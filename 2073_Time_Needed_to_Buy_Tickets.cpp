#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution
{
public:
    int timeRequiredToBuy(vector<int> &tickets, int k)
    {
        int ans = 0;

        for (int i = 0; i < tickets.size(); ++i)
            if (i <= k)
                ans += min(tickets[i], tickets[k]);
            else
                ans += min(tickets[i], tickets[k] - 1);

        return ans;
    }
};

int main()
{
    Solution s;
    vector<int> tickets = {2, 3, 4, 5, 6};
    int k = 2;
    cout << s.timeRequiredToBuy(tickets, k) << endl;
    return 0;
}