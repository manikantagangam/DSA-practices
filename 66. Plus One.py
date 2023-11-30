class Solution(object):
    def plusOne(self, digits):
        s = ""
        for i in digits:
            s = s + str(i)
        s = int(s)
        s = s+1
        s = str(s)
        p = []
        for i in s:
            p.append(i)
        return p
        