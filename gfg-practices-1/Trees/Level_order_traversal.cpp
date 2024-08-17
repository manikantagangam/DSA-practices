#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};
// Utility function to create a new Tree Node
Node *newNode(int val)
{
    Node *temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

class Solution
{
public:
    // Function to return the level order traversal of a tree.
    vector<int> levelOrder(Node *node)
    {
        // Your code here
        vector<int> ans;
        if (!node)
            return ans;
        queue<Node *> q;
        q.push(node);

        while (q.size() > 0)
        {
            int n = q.size();
            for (int i = 0; i < n; i++)
            {
                Node *temp = q.front();
                if (temp->left)
                    q.push(temp->left);
                if (temp->right)
                    q.push(temp->right);
                ans.push_back(temp->data);
                q.pop();
            }
        }
        return ans;
    }
};
