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
    ListNode *removeNodes(ListNode *head)
    {
        vector<int> nums;
        while (head)
        {
            nums.push_back(head->val);
            head = head->next;
        }
        vector<int> ans;
        for (int i : nums)
        {
            while (!ans.empty() && ans.back() < i)
            {
                ans.pop_back();
            }
            ans.push_back(i);
        }
        ListNode dummy;
        head = &dummy;
        for (int e : ans)
        {
            head->next = new ListNode(e);
            head = head->next;
        }
        return dummy.next;
    }
};