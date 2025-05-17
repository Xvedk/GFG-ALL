class Solution:
    def sortArray(self, arr, A, B, C):
        def transform(number):
            return A*(number*number)+B*number+C
        return sorted(map(transform, arr))
