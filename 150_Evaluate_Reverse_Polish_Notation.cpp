#include <iostream>
#include <stack>
#include <vector>
using namespace std;

class Solution
{
public:
    int evalRPN(vector<string> &tokens)
    {
        stack<int> nums;
        for (auto i : tokens)
        {
            if (i == "+" || i == "-" || i == "/" || i == "*")
            {
                int x1 = nums.top();
                nums.pop();
                int x2 = nums.top();
                nums.pop();
                if (i == "+")
                    nums.push(x1 + x2);
                if (i == "-")
                    nums.push(x2 - x1);
                if (i == "*")
                    nums.push(x1 * x2);
                if (i == "/")
                    nums.push(x2 / x1);
            }
            else
            {
                nums.push(stoi(i));
            }
        }

        return nums.top();
    }
};

int main()
{
    vector<string> v = {"2", "1", "+", "3", "*"};
    Solution s;
    cout << s.evalRPN(v) << endl;
}