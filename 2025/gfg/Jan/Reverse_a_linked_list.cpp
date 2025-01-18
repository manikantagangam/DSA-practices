/* Linked List Node structure:

struct Node
{
    int data;
    struct Node *next;
}

*/

class Solution
{
public:
    Node *reverseList(struct Node *head)
    {
        Node *prev = NULL;
        Node *cur = head;

        while (cur)
        {
            Node *temp = cur->next;
            cur->next = prev;
            prev = cur;
            cur = temp;
        }

        return prev;
    }
};