class Solution:
    def findDuplicate(self, arr):
        n=len(arr)+1
        for i in range(len(arr)):
            x=arr[i]%n-1
            if arr[x]>=n:
                return x+1
            arr[x]+=n
        return -1
