class Solution:
    
    # Function to find all elements in array that appear more than n/k times.
    def countOccurence(self, arr, n, k):
        count_dict = {}

        # Count occurrences of each element in the array
        for element in arr:
            if element in count_dict:
                count_dict[element] += 1
            else:
                count_dict[element] = 1

        # Check which elements appear more than n/k times
        threshold = n // k
        result_count = 0
        for element, count in count_dict.items():
            if count > threshold:
                result_count += 1

        return result_count
