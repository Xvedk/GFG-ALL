from collections import Counter

class Solution:
    def validgroup(self, arr, k):
        if len(arr) % k != 0:
            return False

        freq = Counter(arr)
        for num in sorted(freq):
            cnt = freq[num]
            if cnt > 0:
                for i in range(k):
                    if freq[num + i] < cnt:
                        return False
                    freq[num + i] -= cnt
        return True
