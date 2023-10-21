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
    vector<int> nextLargerNodes(ListNode *head)
    {
        vector<int> inputs;
        while (head)
        {
            inputs.push_back(head->val);
            head = head->next;
        }
        vector<int> ans(inputs.size(), 0);
        stack<int> stk;

        for (int i = 0; i < inputs.size(); i++)
        {
            while (!stk.empty() && inputs[i] > inputs[stk.top()])
            {
                ans[stk.top()] = inputs[i];
                stk.pop();
            }
            stk.push(i);
        }
        return ans;
    }
};