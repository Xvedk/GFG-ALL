from collections import defaultdict
class Solution:
    def sumOfDependencies(self, adj, V):
        totalDependencies = 0

        for node in range(V):
            totalDependencies += len(adj[node])

        return totalDependencies
