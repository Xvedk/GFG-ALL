class Solution:    
    def minimumPlatform(self,n,arr,dep):
        # code here
        arr.sort()
        dep.sort()
        
        i, j = 0 , 0 
        ans  = 0 
        count = 0 
        # arrival pe (count +=1) , departure pe (count -=1 )
        while i < n : 
            if arr[i] <= dep[j] :#it means its arrival time 
                count += 1 
                ans = max(ans , count )
                i+=1
            else : # it means its departure time 
                j+=1 
                count -=1 
                
        return ans 
        
