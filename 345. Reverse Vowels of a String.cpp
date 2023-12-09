class Solution
{
public:
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string reverseVowels(string s)
    {
        int f = 0, l = s.size() - 1;

        while (f < l)
        {
            while (f < s.size() && !isVowel(s[f]))
            {
                f++;
            }
            while (l >= 0 && !isVowel(s[l]))
            {
                l--;
            }
            if (f < l)
            {
                swap(s[f++], s[l--]);
            }
        }

        return s;
    }
};