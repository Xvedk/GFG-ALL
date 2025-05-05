class Solution:
     def findTarget(self, arr, target):
        # code here
        lo, hi = 0, len(arr)
        while lo < hi:
            mi = lo+(hi-lo)//2
            if arr[mi] >= target:
                if mi + 1 < len(arr) and arr[mi+1] == target:
                    return mi+1
                hi = mi
            else:
                if mi - 1 >= 0 and arr[mi-1] == target:
                    return mi-1
                lo = mi+1
        if lo < 0 or lo >= len(arr) or arr[lo] != target:
            return -1
        return lo
