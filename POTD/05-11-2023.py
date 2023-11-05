from collections import Counter
class Solution:
	def topK(self, nums, k):
	    freq_counter = Counter(nums)
    
    # Sort elements by frequency (in descending order) and value (in descending order)
        sorted_elements = sorted(freq_counter.keys(), key=lambda x: (-freq_counter[x], -x))
    
    # Return the top k elements
        return sorted_elements[:k]
