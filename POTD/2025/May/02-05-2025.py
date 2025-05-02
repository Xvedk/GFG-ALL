class Solution:

	def findMaximum(self, arr):
		# binary search the first element in a region that arr[i] > arr[i+1]
		# or binary serach the last element in a region that arr[i-1] < arr[i]
		
		# search the first element 
# 		n = len(arr)
# 		lo, hi = 0, n
# 		while lo < hi:
# 		    mi = lo+(hi-lo)//2
# 		    if mi >= n-1 or arr[mi] > arr[mi+1]:
# 		        hi = mi
#             else:
#                 lo = mi+1
        
#         return arr[lo] if lo < n else arr[-1]

        #search the last element
        n = len(arr)
        lo, hi = -1, n-1
        while lo < hi:
            mi = hi - (hi-lo)//2
            if mi <= 0 or arr[mi-1] < arr[mi]:
                lo = mi
            else:
                hi = mi-1
        
        return arr[lo] if lo >= 0 else arr[0]
