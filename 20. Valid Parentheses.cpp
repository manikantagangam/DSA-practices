class Solution
{
public:
    bool isValid(string s)
    {
        stack<char> t;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                t.push(s[i]);
            }
            else
            {
                if (t.empty())
                    return false;

                char topChar = t.top();
                t.pop();

                if ((s[i] == ')' && topChar != '(') ||
                    (s[i] == ']' && topChar != '[') ||
                    (s[i] == '}' && topChar != '{'))
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