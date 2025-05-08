class Solution:
      def findMissing(self, arr):
        # code here
        # compute the difference of the AP
        d = min(arr[1] - arr[0], arr[-1] -arr[-2])
        # Compare the difference to find the missing term
        return next((arr[i] + d for i in range(len(arr)-1) if d != arr[i+1] - arr[i]), arr[-1]+d)
