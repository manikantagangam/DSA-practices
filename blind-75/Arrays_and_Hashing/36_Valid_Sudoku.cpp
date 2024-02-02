#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    bool isValidSudoku(vector<vector<char>> &board)
    {
        const int cnt = 9;
        bool row[cnt][cnt] = {false};
        bool col[cnt][cnt] = {false};
        bool sub[cnt][cnt] = {false};

        for (int r = 0; r < cnt; ++r)
        {
            for (int c = 0; c < cnt; ++c)
            {
                if (board[r][c] == '.')
                    continue; // if not a number, pass

                int idx = board[r][c] - '0' - 1; // char to num idx
                int area = (r / 3) * 3 + (c / 3);

                // if the number already exists
                if (row[r][idx] || col[c][idx] || sub[area][idx])
                {
                    return false;
                }

                row[r][idx] = true;
                col[c][idx] = true;
                sub[area][idx] = true;
            }
        }
        return true;
    }
};

int main()
{
    Solution s;
    vector<vector<char>> board = {
        {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
        {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
        {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
        {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
        {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
        {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
        {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
        {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
        {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
    cout << s.isValidSudoku(board) << endl;
    return 0;
}