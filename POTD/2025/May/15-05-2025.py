class Solution:
    def countSubstring(self, s):
        d={}
        count=0
        for i in s:
            if i in d:
                count+=d[i]
            d[i]=d.get(i,0)+1
        return count+len(s)

