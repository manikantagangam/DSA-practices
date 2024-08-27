class Solution
{
public:
    string decodeString(string s)
    {
        stack<int> nums;
        stack<string> strings;

        string ans = "";
        int k = 0;

        for (char &c : s)
        {
            if (isdigit(c))
            {
                k = k * 10 + (c - '0');
            }
            else if (c == '[')
            {
                nums.push(k);
                k = 0;
                strings.push("[");
            }
            else if (c == ']')
            {
                string temp;
                while (strings.top() != "[")
                {
                    temp = strings.top() + temp;
                    strings.pop();
                }
                strings.pop();

                string replacement;
                int count = nums.top();
                nums.pop();
                for (int i = 0; i < count; i++)
                    replacement += temp;

                strings.push(replacement);
            }
            else
            {
                strings.push(string(1, c));
            }
        }

        while (!strings.empty())
        {
            ans = strings.top() + ans;
            strings.pop();
        }

        return ans;
    }
};