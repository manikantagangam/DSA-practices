#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

class Solution
{
public:
    double average(vector<int> &salary)
    {
        double s = accumulate(salary.begin(), salary.end(), 0);
        sort(salary.begin(), salary.end());
        s = s - salary[0] - salary[salary.size() - 1];
        return s / (salary.size() - 2);
    }
};

int main()
{
    Solution s;
    vector<int> salary = {4000, 3000, 1000, 2000};
    cout << s.average(salary) << endl;
    return 0;
}