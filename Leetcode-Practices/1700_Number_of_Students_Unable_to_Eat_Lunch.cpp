#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

class Solution
{
public:
    int countStudents(vector<int> &students, vector<int> &sandwiches)
    {
        vector<int> count(2);

        for (const int student : students)
            ++count[student];

        for (int i = 0; i < sandwiches.size(); ++i)
        {
            if (count[sandwiches[i]] == 0)
                return sandwiches.size() - i;
            --count[sandwiches[i]];
        }

        return 0;
    }
};

int main()
{
    Solution s;
    vector<int> students = {1, 1, 0, 0};
    vector<int> sandwiches = {0, 1, 0, 1};
    cout << s.countStudents(students, sandwiches) << endl;
    return 0;
}