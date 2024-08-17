// Input:
// LinkedList: 1->2->3->4->5->6
// Output: 6 5 4 3 2 1
// Explanation: After reversing the list,
// elements are 6->5->4->3->2->1.

#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

class Solution
{
public:
    // Function to reverse a linked list.
    struct Node *reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *prev = nullptr;
        Node *curr = head;
        while (curr)
        {
            Node *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
};

void printList(struct Node *head)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
}

int main()
{
    int T, n, l, firstdata;
    cin >> T;

    while (T--)
    {
        struct Node *head = NULL, *tail = NULL;

        cin >> n;

        if (n != 0)
        {
            cin >> firstdata;
            head = new Node(firstdata);
            tail = head;
        }

        for (int i = 1; i < n; i++)
        {
            cin >> l;
            tail->next = new Node(l);
            tail = tail->next;
        }

        Solution ob;
        head = ob.reverseList(head);

        printList(head);
        cout << endl;
    }
    return 0;
}