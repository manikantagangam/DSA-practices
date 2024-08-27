/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    TreeNode *mergeTrees(TreeNode *root1, TreeNode *root2)
    {
        if (!root1 && !root2)
            return NULL;

        int v1, v2;
        if (root1)
            v1 = root1->val;
        else
            v1 = 0;
        if (root2)
            v2 = root2->val;
        else
            v2 = 0;
        TreeNode *root = new TreeNode(v1 + v2);
        root->left = mergeTrees(root1 == NULL ? NULL : root1->left, root2 == NULL ? NULL : root2->left);
        root->right = mergeTrees(root1 == NULL ? NULL : root1->right, root2 == NULL ? NULL : root2->right);
        return root;
    }
};