class Solution:
    def getSingle(self, arr):
        return (3*sum(set(arr)) - sum(arr)) // 2
