class Solution:
    def sumK(self, root, k):
        MOD = 10**9 + 7

        def dfs(node, current_sum, prefix_sum_count):
            if not node:
                return 0

            current_sum += node.data
            result = prefix_sum_count.get(current_sum - k, 0)

            prefix_sum_count[current_sum] = prefix_sum_count.get(current_sum, 0) + 1

            result += dfs(node.left, current_sum, prefix_sum_count)
            result += dfs(node.right, current_sum, prefix_sum_count)

            prefix_sum_count[current_sum] -= 1  # Backtrack

            return result

        prefix_sum_count = {0: 1}  # Initialize with the prefix sum of 0
        return dfs(root, 0, prefix_sum_count) % MOD
