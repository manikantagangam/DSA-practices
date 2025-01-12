"""
Given an array arr[] with non-negative integers representing 
the height of blocks. 
If the width of each block is 1, 

compute how much water can be trapped between the blocks 
during the rainy season. 


Examples:

Input: arr[] = [3, 0, 1, 0, 4, 0 2]
Output: 10
Explanation: Total water trapped = 0 + 3 + 2 + 3 + 0 + 2 + 0 = 10 units.

Input: arr[] = [3, 0, 2, 0, 4]
Output: 7
Explanation: Total water trapped = 0 + 3 + 1 + 3 + 0 = 7 units.

Input: arr[] = [1, 2, 3, 4]
Output: 0
Explanation: We cannot trap water as there is no height bound on both sides.

Input: arr[] = [2, 1, 5, 3, 1, 0, 4]
Output: 9
Explanation: Total water trapped = 0 + 1 + 0 + 1 + 3 + 4 + 0 = 9 units.
"""
# O(N) Solution

class Solution:
    def maxWater(self, arr):
        
        # min(max_l, max_r) - h[i]
        
        n = len(arr)
        l = [0] * n
        r = [0] * n
        
        for i, h in enumerate(arr):
            l[i] = h if i == 0 else max(h, l[i - 1])
        
        for i, h in reversed(list(enumerate(arr))):
            r[i] = h if i == n - 1 else max(h, r[i + 1])
        
        return sum(min(l[i], r[i]) - h
               for i, h in enumerate(arr))
        
        