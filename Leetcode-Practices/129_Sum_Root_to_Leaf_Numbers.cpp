#include <iostream>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    int sumNumbers(TreeNode *root)
    {
        int ans = 0;
        dfs(root, 0, ans);
        return ans;
    }

private:
    void dfs(TreeNode *root, int path, int &ans)
    {
        if (root == nullptr)
            return;
        if (root->left == nullptr && root->right == nullptr)
        {
            ans += path * 10 + root->val;
            return;
        }

        dfs(root->left, path * 10 + root->val, ans);
        dfs(root->right, path * 10 + root->val, ans);
    }
};

int main()
{
    TreeNode *root = new TreeNode();
    root->val = 1;
    root->left = new TreeNode();
    root->left->val = 2;
    root->right = new TreeNode();
    root->right->val = 3;
    Solution s;
    cout << s.sumNumbers(root) << endl;
    return 0;
}