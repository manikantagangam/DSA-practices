# Input: words = ["aba","bcb","ece","aa","e"], queries = [[0,2],[1,4],[1,1]]
# Output: [2,3,0]

# Brute force Approach
# class Solution:
#     def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
#         vowels = ['a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U']
#         ans = []
#         for q in queries:
#             a = 0
#             for w in words[q[0]:q[1]+1]:
#                 if ((w[0] in vowels) and (w[-1] in vowels)):
#                     a += 1
#             ans.append(a)
#         return ans

class Solution:
    def vowelStrings(self, words: List[str], queries: List[List[int]]) -> List[int]:
        vowels = set("aeiou")

        prefix = [0]*(len(words)+1)
        prev = 0

        for i, w in enumerate(words):
            if ((w[0] in vowels) and (w[-1] in vowels)):
                prev += 1
            prefix[i+1] = prev
        
        ans = [0]*len(queries)

        for i, q in enumerate(queries):
            l, r = q
            ans[i] = prefix[r+1] - prefix[l]

        return ans