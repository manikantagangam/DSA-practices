/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    void reorderList(ListNode *head)
    {

        // Find the middle and split the list
        ListNode *slow = head, *fast = head;
        while (fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *second = slow->next;
        slow->next = nullptr;

        // Reverse the second half
        ListNode *prev = nullptr;
        while (second)
        {
            ListNode *tmp = second->next;
            second->next = prev;
            prev = second;
            second = tmp;
        }

        // Merge the two halves
        ListNode *first = head, *secondHead = prev;
        while (secondHead)
        {
            ListNode *tmp1 = first->next, *tmp2 = secondHead->next;
            first->next = secondHead;
            secondHead->next = tmp1;
            first = tmp1;
            secondHead = tmp2;
        }
    }
};
