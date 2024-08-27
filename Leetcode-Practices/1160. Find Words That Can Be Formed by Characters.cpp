class Solution
{
public:
    int countCharacters(vector<string> &words, string chars)
    {
        unordered_map<char, int> count;
        for (auto ch : chars)
        {
            count[ch]++;
        }
        int ans = 0;
        for (auto w : words)
        {
            unordered_map<char, int> cur_word;
            bool good = true;
            for (auto c : w)
            {
                cur_word[c]++;
                if (cur_word[c] > count[c] || count.find(c) == count.end())
                {
                    good = false;
                    break;
                }
            }
            if (good)
            {
                ans += w.size();
            }
        }
        return ans;
    }
};