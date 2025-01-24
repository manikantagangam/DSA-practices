// User function template for C++

/*

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

*/
// class Solution {
//   public:
//     // Function to check if the linked list has a loop.
//     bool detectLoop(Node* head) {
//         // your code here
//     }
// };

class Solution
{
public:
    bool detectLoop(Node *head)
    {
        if (!head)
            return false;
        Node *slow = head;
        Node *fast = head;

        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                return true;
        }
        return false;
    }
};