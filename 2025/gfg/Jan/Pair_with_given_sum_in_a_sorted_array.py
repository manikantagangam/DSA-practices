"""
You are given an integer target and an array arr[]. 
You have to find number of pairs in arr[] which sums up to target. 
It is given that the elements of the arr[] are in sorted order.
Note: pairs should have elements of distinct indexes. 

Examples :

Input: arr[] = [-1, 1, 5, 5, 7], target = 6
Output: 3
Explanation: There are 2 pairs which sum up to 6 : {1, 5}, {1, 5} and {-1, 7}.

Input: arr[] = [1, 1, 1, 1], target = 2
Output: 6
Explanation: There are 6 pairs which sum up to 2 : {1, 1}, {1, 1}, {1, 1}, {1, 1}, {1, 1} and {1, 1}.

Input: arr[] = [-1, 10, 10, 12, 15], target = 125
Output: 0
Explanation: There is no such pair which sums up to 4.

Brute Force Implementation O(N^2)

class Solution:
    def countPairs (self, arr, target) : 
        ans = 0
        for i in range(len(arr)):
            for j in range(len(arr)):
                if(i!=j):
                    if(arr[i] + arr[j] == target):
                        ans+=1
        return int(ans/2)

"""

class Solution:
    def countPairs(self, arr, target):
        ans = 0
        st = 0
        end = len(arr) - 1
        
        # Sort the array to use two-pointer technique
        arr.sort()
        
        while st < end:
            curr_sum = arr[st] + arr[end]
            
            if curr_sum > target:
                end -= 1
            elif curr_sum < target:
                st += 1
            else:
                e1 = arr[st]
                e2 = arr[end]
                c1 = c2 = 0
                
                # Count occurrences of e1
                while st <= end and arr[st] == e1:
                    st += 1
                    c1 += 1
                
                # Count occurrences of e2
                while st <= end and arr[end] == e2:
                    end -= 1
                    c2 += 1
                
                # If e1 == e2, count pairs in the form of combinations
                if e1 == e2:
                    ans += (c1 * (c1 - 1)) // 2
                else:
                    ans += c1 * c2
        
        return ans
