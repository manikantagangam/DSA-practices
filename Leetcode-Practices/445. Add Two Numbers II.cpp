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
    ListNode *reverseList(ListNode *head)
    {
        ListNode *prev = NULL;
        ListNode *cur = head;
        while (cur)
        {
            ListNode *next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }
        return prev;
    }
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode dummy;
        ListNode *curr = &dummy;
        int v1, v2, val;
        int carry = 0;
        ListNode *p1 = reverseList(l1);
        ListNode *p2 = reverseList(l2);
        while (p1 || p2 || carry)
        {
            if (p1)
                v1 = p1->val;
            else
                v1 = 0;
            if (p2)
                v2 = p2->val;
            else
                v2 = 0;

            val = v1 + v2 + carry;
            carry = floor(val / 10);
            val = val % 10;
            curr->next = new ListNode(val);

            curr = curr->next;
            if (p1)
                p1 = p1->next;
            if (p2)
                p2 = p2->next;
        }
        return reverseList(dummy.next);
    }
};