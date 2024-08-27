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
    int pairSum(ListNode *head)
    {
        ListNode *fast = head, *slow = head, *prev = NULL, *tmp;
        while (fast && fast->next)
        {
            fast = fast->next->next;
            tmp = slow->next;
            slow->next = prev;
            prev = slow;
            slow = tmp;
        }

        int ans = 0;
        while (slow)
        {
            ans = max(ans, prev->val + slow->val);
            prev = prev->next;
            slow = slow->next;
        }
        return ans;
    }
};