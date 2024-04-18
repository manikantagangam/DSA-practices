#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int islandPerimeter(vector<vector<int>> &grid)
    {
        int islands = 0;
        int neighbors = 0;

        for (int i = 0; i < grid.size(); ++i)
            for (int j = 0; j < grid[0].size(); ++j)
                if (grid[i][j])
                {
                    ++islands;
                    if (i - 1 >= 0 && grid[i - 1][j])
                        ++neighbors;
                    if (j - 1 >= 0 && grid[i][j - 1])
                        ++neighbors;
                }

        return islands * 4 - neighbors * 2;
    }
};

int main()
{
    Solution s;
    vector<vector<int>> grid = {{0, 1, 0, 0},
                                {1, 1, 1, 0},
                                {0, 1, 0, 0},
                                {1, 1, 0, 0}};
    cout << s.islandPerimeter(grid) << endl;
    return 0;
}