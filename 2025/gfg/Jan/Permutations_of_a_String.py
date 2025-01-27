class Solution:
    
    def recurPermute(self, index, s, ans):
        if index == len(s):
            ans.append("".join(s))
            return
        
        for i in range(index, len(s)):
            s[index], s[i] = s[i], s[index]  # Swap characters
            self.recurPermute(index + 1, s, ans)  # Recursive call
            s[index], s[i] = s[i], s[index]  # Backtrack (swap back)
        
    
    def findPermutation(self, s):
        ans = []
        self.recurPermute(0, list(s), ans)  # Start the recursion
        ans = list(set(ans))  # Remove duplicates
        ans.sort()  # Sort the permutations lexicographically
        return ans
