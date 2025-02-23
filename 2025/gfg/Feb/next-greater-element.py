class Solution:
    def nextLargerElement(self, arr):
        n = len(arr)
        ans = [-1 for i in range(n)]
        
        st = []
        
        for i in range(n-1, -1, -1):
            while(len(st) != 0 and st[-1]<=arr[i]):
                st.pop()
            if(len(st)!= 0):
                ans[i] = st[-1]
            st.append(arr[i])
        
        return ans

if __name__ == "__main__":
    s = Solution()
    print(s.nextLargerElement([6, 8, 0, 1, 3]))


# [1, 3, 2, 4]
# [6, 8, 0, 1, 3]
# [10, 20, 30, 50]
# [50, 40, 30, 10]