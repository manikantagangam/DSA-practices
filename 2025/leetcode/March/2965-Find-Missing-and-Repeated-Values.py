class Solution:
    def findMissingAndRepeatedValues(self, grid):
        n = len(grid)
        count = {}

        for i in range(n):
            for j in range(n):
                if grid[i][j] not in count:
                    count[grid[i][j]] = 0
                count[grid[i][j]] += 1
        
        double, missing = 0, 0

        for i in range(1, n*n+1):
            if i not in count:
                missing = i
            elif count[i] == 2:
                double = i
        
        return [double, missing]


if __name__ == '__main__':
    s = Solution()
    print(s.findMissingAndRepeatedValues([[1,3],[2,2]]))