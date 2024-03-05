class Solution:
    #User function Template for python3
    
    # arr[]: Input Array
    # N : Size of the Array arr[]
    #Function to count inversions in the array.
    def inversionCount(self, arr, n):
        temp = [0] * n
        return self._mergeSort(arr, temp, 0, n - 1)
    
    def _merge(self, arr, temp, left, mid, right):
        i = left
        j = mid + 1
        k = left
        inv_count = 0
        
        while i <= mid and j <= right:
            if arr[i] <= arr[j]:
                temp[k] = arr[i]
                i += 1
            else:
                temp[k] = arr[j]
                j += 1
                inv_count += (mid - i + 1)  # Counting inversions
            k += 1
            
        while i <= mid:
            temp[k] = arr[i]
            i += 1
            k += 1
            
        while j <= right:
            temp[k] = arr[j]
            j += 1
            k += 1
            
        for i in range(left, right + 1):
            arr[i] = temp[i]
            
        return inv_count

    def _mergeSort(self, arr, temp, left, right):
        inv_count = 0
        if left < right:
            mid = (left + right) // 2
            inv_count += self._mergeSort(arr, temp, left, mid)
            inv_count += self._mergeSort(arr, temp, mid + 1, right)
            inv_count += self._merge(arr, temp, left, mid, right)
        return inv_count
