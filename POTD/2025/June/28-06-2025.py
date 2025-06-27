class Solution:
    def calc(self,b,i):
        if b[0]>i:
            return 0
        if b[-1]<=i:
            return len(b)
        ans = -1
        l,h=0,len(b)-1
        while l<=h:
            mid = h-(h-l)//2
            if b[mid]<=i:
                ans = max(ans,mid)
                l = mid+1
            else:
                h=mid-1
        return ans+1
                
    def countLessEq(self, a, b):
        # code here
        b.sort()
        ans = []
        for i in a:
            ans.append(self.calc(b,i))
        return ans
