class Solution:
    def getHappyString(self, n: int, k: int) -> str:
        total = 3 * (2**(n-1))

        ans = []
        choices = "abc"
        left, right = 1, total

        for i in range(n):

            cur = left
            partition_size = (right-left+1)//len(choices)

            for c in choices:
                if k in range(cur, cur+partition_size):
                    ans.append(c)
                    left = cur
                    right = cur + partition_size -1
                    choices = "abc".replace(c, "")
                    break
                cur += partition_size
                    


        return "".join(ans)

if __name__ == "__main__":
    s = Solution()
    ans = s.getHappyString(3, 9)
    print(ans)