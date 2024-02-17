#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

bool sortByEndTime(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}

int maxActivities(vector<pair<int, int>> activities, int n)
{
    sort(activities.begin(), activities.end(), sortByEndTime);
    int count = 1;
    int last = 0;
    for (int i = 1; i < n; i++)
    {
        if (activities[i].first >= activities[last].second)
        {
            count++;
            last = i;
        }
    }
    return count;
}

int main()
{
    vector<pair<int, int>> activities = {{2, 3}, {1, 4}, {5, 8}, {6, 10}};
    int n = activities.size();
    cout << maxActivities(activities, n);
    return 0;
}

// Time Complexity: O(nlogn)
