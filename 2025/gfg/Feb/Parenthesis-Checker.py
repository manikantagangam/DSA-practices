class Solution:
    def isBalanced(self, s):
        stack = []
        
        for c in s:
            
            if c == '(':
                stack.append(')')
            elif c == '{':
                stack.append('}')
            elif c == '[':
                stack.append(']')
            elif not stack or stack.pop() != c:
                return False
        
        return not stack

if __name__ == "__main__":
    s = Solution()
    st = input("Enter the string: ")
    ans = s.isBalanced(st)
    print(ans)
