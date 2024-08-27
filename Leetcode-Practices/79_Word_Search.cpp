#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Solution
{
public:
    bool exist(vector<vector<char>> &board, string word)
    {
        int row = board.size();
        int col = board[0].size();

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (dfs(board, word, i, j, 0))
                {
                    return true;
                }
            }
        }
        return false;
    }

    bool dfs(vector<vector<char>> &board, string &word, int i, int j, int s)
    {
        int row = board.size();
        int col = board[0].size();
        if (i < 0 || j < 0 || i >= row || j >= col || board[i][j] != word[s] || board[i][j] == '*')
        {
            return false;
        }
        if (s == word.length() - 1)
            return true;

        char cache = board[i][j];
        board[i][j] = '*';

        bool find = dfs(board, word, i + 1, j, s + 1) || dfs(board, word, i - 1, j, s + 1) || dfs(board, word, i, j + 1, s + 1) || dfs(board, word, i, j - 1, s + 1);

        board[i][j] = cache;

        return find;
    }
};

int main()
{
    Solution s;
    vector<vector<char>> board = {{'A', 'B', 'C', 'E'}, {'S', 'F', 'C', 'S'}, {'A', 'D', 'E', 'E'}};
    string word = "ABCCED";
    cout << s.exist(board, word) << endl;
    return 0;
}