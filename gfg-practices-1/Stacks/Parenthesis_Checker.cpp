// Given an expression string x. Examine whether the pairs and the orders of {,},(,),[,] are correct in exp.
// For example, the function should return 'true' for exp = [()]{}{[()()]()} and 'false' for exp = [(]).

// Note: The drive code prints "balanced" if function return true, otherwise it prints "not balanced".

// Example 1:

// Input:
// {([])}
// Output:
// true
// Explanation:
// { ( [ ] ) }. Same colored brackets can form
// balanced pairs, with 0 number of
// unbalanced bracket.

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    // Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        // Your code here
        stack<char> t;
        for (int i = 0; i < x.length(); i++)
        {
            if (x[i] == '(' || x[i] == '[' || x[i] == '{')
            {
                t.push(x[i]);
            }

            else
            {
                if (t.empty())
                    return false;

                char topChar = t.top();
                t.pop();

                if ((x[i] == ')' && topChar != '(') ||
                    (x[i] == ']' && topChar != '[') ||
                    (x[i] == '}' && topChar != '{'))
                {
                    return false;
                }
            }
        }
        if (t.empty())
            return true;
        else
            return false;
    }
};