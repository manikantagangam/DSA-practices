class Solution:
    def maxLength(self, s):
        st = []
        st.append(-1)
        maxi = 0
        
        for i in range(len(s)):
            if s[i] == "(":
                st.append(i)
            else:
                st.pop();
                if(len(st)!=0):
                    maxi = max(maxi, i-st[-1])
                else:
                    st.append(i)
            
        return maxi

if __name__ == "__main__":
    s = Solution()
    print(s.maxLength("((()"))