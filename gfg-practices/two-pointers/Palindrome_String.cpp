// Given a string S, check if it is palindrome or not.

// Example 1:
// Input: S = "abba"
// Output: 1
// Explanation: S is a palindrome

// Example 2:
// Input: S = "abc"
// Output: 0
// Explanation: S is not a palindrome

class Solution
{
public:
    int isPalindrome(string S)
    {
        // Your code goes here
        int l = 0;
        int r = S.size() - 1;
        while (l < r)
        {
            if (S[l] == S[r])
            {
                l++;
                r--;
            }
            else
            {
                return 0;
            }
        }
        return 1;
    }
};