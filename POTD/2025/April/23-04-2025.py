from collections import Counter

class Solution:
    def singleNum(self, arr):
        freq = Counter(arr)                # O(n)
        result = sorted([x for x in freq if freq[x] == 1])  # O(n log n) for sorting
        return result
