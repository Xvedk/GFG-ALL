def binarysearch(self, arr, n, k):
		# code here
		l = 0
        r = len(arr)-1
        mid = (l+r)//2
    
        while l <= r:
            mid = (l+r)//2
            if arr[mid] == k:
                return mid
            elif arr[mid] < k:
                l = mid +1
            else:
                r = mid-1
        return -1
