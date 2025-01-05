"""
Given an array arr[] and an integer target. 
You have to find the number of pairs in the array whose 
sum is strictly less than the target.

Input: arr[] = [7, 2, 5, 3], target = 8
Output: 2
Explanation: There are 2 pairs with sum less than 8: (2, 5) and (2, 3). 

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Brute - Force Approach:

class Solution:
    def countPairs(self, arr, target):
        count = 0
        for i in range(len(arr)):
            for j in range(i+1, len(arr)):
                if(arr[i]+arr[j] < target):
                    count+=1
        return count

------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

Optimal Approach:
"""

class Solution:
    def countPairs(self, arr, target):
        arr = sorted(arr)
        l = 0
        r = len(arr)-1
        ans = 0
        while(l<r):
            if(arr[l]+arr[r] >= target):
                r-=1
            if(arr[l]+arr[r] < target):
                ans += (r-l)
                l+=1
        return ans