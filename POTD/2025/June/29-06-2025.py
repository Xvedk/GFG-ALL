class Solution:
     def splitArray(self, arr, k):
        # code here
        
        def ok(mi):
            """given a sum mi, compute how many subarray can be created whose sum <= mi"""
            i, cnt, s = 0, 0, 0
            while i < len(arr):
                if arr[i] + s <= mi:
                    s += arr[i]
                    i += 1
                else:
                    s = 0
                    cnt += 1
            return cnt+1 <= k
                    
        
        lo, hi = max(arr), sum(arr)
        while lo < hi:
            mi = lo+(hi-lo)//2
            if ok(mi):
                hi = mi
            else:
                lo = mi+1
        return lo
