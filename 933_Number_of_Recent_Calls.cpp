#include <iostream>
#include <queue>
using namespace std;

class RecentCounter
{
public:
    queue<int> q;
    RecentCounter()
    {
    }

    int ping(int t)
    {
        int st = t - 3000, c = 0;
        q.push(t);

        while (!q.empty())
        {
            if (q.front() < st)
                q.pop();
            else
                break;
        }

        return q.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */

int main()
{
    RecentCounter *obj = new RecentCounter();
    cout << obj->ping(1) << endl;
    cout << obj->ping(100) << endl;
    cout << obj->ping(3001) << endl;
    cout << obj->ping(3002) << endl;
    return 0;
}