# # Brute Force Method 

# O(n^3)

# class Solution:
#     def subarrayXor(self, arr, k):
#         ans = []
#         res = 0
#         n = len(arr)

#         # Function to compute XOR of a subarray
#         def xor(l):
#             x = l[0]
#             for i in range(1, len(l)):
#                 x = x ^ l[i]
#             return x

#         # Brute force approach to find all subarrays
#         for i in range(n):
#             for j in range(i, n):  # Start j from i to ensure valid subarrays
#                 # Subarray arr[i:j+1]
#                 if xor(arr[i:j+1]) == k:
#                     ans.append(arr[i:j+1])
#                     res += 1

#         return res  # R


## O(n^2)

# class Solution:
#     def subarrayXor(self, arr, k):
#         # code here
#         ans = 0
#         for i in range(len(arr)):
#             xor = 0
#             for j in range(i, len(arr)):
#                 xor = xor^arr[j]
#                 if(xor == k):
#                     ans+=1
        
#         return ans

# O(n)

from collections import defaultdict
class Solution:
    def subarrayXor(self, arr, k):
        # code here
        xr = 0
        d = defaultdict(int)
        d[xr] = 1
        ans = 0
        
        for i in range(len(arr)):
            xr = xr^arr[i]
            x = xr ^ k
            ans += d[x]
            d[xr] += 1
        
        return ans