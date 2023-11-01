class Solution:
    def minDist(self, arr, n, x, y):
        if x == y:
            return 0

        min_dist = float('inf')
        x_pos, y_pos = -1, -1

        for i in range(n):
            if arr[i] == x:
                x_pos = i
                if y_pos != -1:
                    min_dist = min(min_dist, abs(x_pos - y_pos))
            elif arr[i] == y:
                y_pos = i
                if x_pos != -1:
                    min_dist = min(min_dist, abs(x_pos - y_pos))

        if min_dist == float('inf'):
            return -1
        return min_dist
