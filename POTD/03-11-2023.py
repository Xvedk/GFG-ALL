class Solution:

	def checkTriplet(self,arr, n):
    	# code here
    	max_val = max(arr)
        
        # Create a set to store the square of elements
        square_set = set([x * x for x in arr])

        # Check for Pythagorean triplets using a nested loop
        for i in range(n):
            for j in range(i + 1, n):
                if arr[i] * arr[i] + arr[j] * arr[j] in square_set:
                    return True

        return False
