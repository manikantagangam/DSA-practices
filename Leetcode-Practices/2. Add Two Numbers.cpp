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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode dummy;
        ListNode *curr = &dummy;
        int v1, v2, val;
        int carry = 0;

        while (l1 || l2 || carry)
        {
            if (l1)
                v1 = l1->val;
            else
                v1 = 0;
            if (l2)
                v2 = l2->val;
            else
                v2 = 0;

            val = v1 + v2 + carry;
            carry = floor(val / 10);
            val = val % 10;
            curr->next = new ListNode(val);

            curr = curr->next;
            if (l1)
                l1 = l1->next;
            if (l2)
                l2 = l2->next;
        }
        return dummy.next;
    }
};