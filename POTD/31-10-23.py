class Solution:
    def pushZerosToEnd(self, arr, n):
        non_zero_ptr = 0  # Pointer for non-zero elements

        # Traverse the array
        for i in range(n):
            if arr[i] != 0:
                # Swap the current element with the non-zero pointer element
                arr[i], arr[non_zero_ptr] = arr[non_zero_ptr], arr[i]
                non_zero_ptr += 1

