class Solution(object):
    def isAnagram(self, s, t):
        # return sorted(s) == sorted(t)
        ds = {}
        dt = {}
        for i in s:
            if i in ds:
                ds[i]+=1
            else:
                ds[i] = 1
        for i in t:
            if i in dt:
                dt[i]+=1
            else:
                dt[i] = 1
        if(len(s) == len(t) and ds == dt):
            return True
        else:
            return False    