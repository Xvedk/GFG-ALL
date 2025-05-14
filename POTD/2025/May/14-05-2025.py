class Solution:
    def countAndSay(self, n):
        if n==1:
            return "1"
        
        say=self.countAndSay(n-1)
        res=""
        i=0
        while i<(len(say)):
            ch=say[i]
            cnt=1
            while (i+1<len(say) and say[i]==say[i+1]):
                cnt+=1
                i+=1
            res+=str(cnt)+say[i]
            i+=1
        return res
