from typing import List
import heapq

class Solution:
    def kthLargest(self, arr: List[int], k: int) -> int:
        result = []
        for i in range(len(arr)):
            sum_ = 0
            for j in range(i, len(arr)):
                sum_ += arr[j]
                result.append(sum_)
        return heapq.nlargest(k, result)[-1]

