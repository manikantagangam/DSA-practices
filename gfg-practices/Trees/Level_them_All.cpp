#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left, *right;
};

struct Node *newNode(int item)
{
    struct Node *temp = new Node;
    temp->data = item;
    temp->left = temp->right = NULL;
    return temp;
}

int Count(Node *node, int L)
{
    // Your code here
    if (!node || L < 1)
        return 0;
    else if (L == 1)
        return 1;

    return Count(node->left, L - 1) + Count(node->right, L - 1);
}

int main()
{
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    cout << Count(root, 2);
    return 0;
}