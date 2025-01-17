"""
Given an array, arr[] construct a product array, res[] where each element in res[i] is the product of all elements in arr[] except arr[i]. Return this resultant array, res[].
Note: Each element is res[] lies inside the 32-bit integer range.

Examples:

Input: arr[] = [10, 3, 5, 6, 2]
Output: [180, 600, 360, 300, 900]
Explanation: For i=0, res[i] = 3 * 5 * 6 * 2 is 180.
For i = 1, res[i] = 10 * 5 * 6 * 2 is 600.
For i = 2, res[i] = 10 * 3 * 6 * 2 is 360.
For i = 3, res[i] = 10 * 3 * 5 * 2 is 300.
For i = 4, res[i] = 10 * 3 * 5 * 6 is 900.

Input: arr[] = [12, 0]
Output: [0, 12]
Explanation: For i = 0, res[i] is 0.
For i = 1, res[i] is 12.

"""

#User function Template for python3

class Solution:
    def productExceptSelf(self, arr):
        #code here
        n = len(arr)
        prefProduct = [1] * n
        suffProduct = [1] * n
        
        res = [0] * n
        
        for i in range(1, n):
            prefProduct[i] = arr[i - 1] * prefProduct[i - 1]
        
        for j in range(n - 2, -1, -1):
            suffProduct[j] = arr[j + 1] * suffProduct[j + 1]
            
        for i in range(n):
            res[i] = prefProduct[i] * suffProduct[i]
            
        return res
