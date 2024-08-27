class Solution
{
public:
    bool isVowel(char c)
    {
        if (c == 'a' || c == 'A' || c == 'e' || c == 'E' || c == 'i' || c == 'I' || c == 'o' || c == 'O' || c == 'u' || c == 'U')
            return true;
        return false;
    }

    bool halvesAreAlike(string s)
    {
        int l = s.length();
        int h1 = 0, h2 = 0;

        for (int i = 0; i < l / 2; i++)
        {
            if (isVowel(s[i]))
                h1++;
        }
        for (int i = l / 2; i < l; i++)
        {
            if (isVowel(s[i]))
                h2++;
        }

        return h1 == h2;
    }
};