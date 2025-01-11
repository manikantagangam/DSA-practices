"""
Given a string s, 
find the length of the longest substring with all distinct characters. 

Examples:

Input: s = "geeksforgeeks"
Output: 7
Explanation: "eksforg" is the longest substring with all 
distinct characters.


Input: s = "aaa"
Output: 1
Explanation: "a" is the longest substring with all distinct characters.


Input: s = "abcdefabcbb"
Output: 6
Explanation: The longest substring with all distinct characters is "abcdef", which has a length of 6.


"""



MAX_CHAR = 26

class Solution:
    def longestUniqueSubstr(self, s):
        n = len(s)
        res = 0
        lastIndex = [-1] * MAX_CHAR
        start = 0
        for end in range(n):
            start = max(start, lastIndex[ord(s[end]) - ord('a')] + 1)
            res = max(res, end - start + 1)
            lastIndex[ord(s[end]) - ord('a')] = end
        
        return res
    