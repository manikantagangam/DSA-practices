class Solution:
    def power(self, b: float, e: int) -> float:
        if e == 0:
            return 1
        if e < 0:
            return 1 / self.power(b, -e)
        
        temp = self.power(b, e // 2)
        if e % 2 == 0:
            return temp * temp
        else:
            return b * temp * temp

s = Solution()
print(s.power(3, 5))