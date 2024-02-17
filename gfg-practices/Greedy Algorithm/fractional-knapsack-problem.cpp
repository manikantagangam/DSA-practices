#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sortByRatio(pair<int, int> a, pair<int, int> b)
{
    return (double)a.first / a.second > (double)b.first / b.second;
}

double fractionalKnapsack(int W, vector<pair<int, int>> items, int n)
{
    sort(items.begin(), items.end(), sortByRatio);
    double res = 0;
    for (int i = 0; i < n; i++)
    {
        if (W == 0)
            return res;
        if (items[i].second <= W)
        {
            res += items[i].first;
            W -= items[i].second;
        }
        else
        {
            res += (double)items[i].first * W / items[i].second;
            W = 0;
        }
    }
    return res;
}

int main()
{
    int W = 50;
    vector<pair<int, int>> items = {{60, 10}, {100, 20}, {120, 30}};
    int n = 3;
    cout << fractionalKnapsack(W, items, n) << endl;
    return 0;
}