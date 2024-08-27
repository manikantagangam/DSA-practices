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
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode dummy;
        dummy.next = head;

        ListNode *prev = &dummy, *cur = head;

        int i = 1;
        for (; i < left; i++)
        {
            prev = prev->next;
            cur = cur->next;
        }

        ListNode *rdummy = prev;
        ListNode *rtail = cur;

        for (; i <= right; i++)
        {
            ListNode *next = cur->next;
            cur->next = prev;
            prev = cur;
            cur = next;
        }

        rdummy->next = prev;
        rtail->next = cur;

        return dummy.next;
    }
};