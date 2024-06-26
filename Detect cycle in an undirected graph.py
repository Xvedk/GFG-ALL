from typing import List
class Solution:
    def isCycle(self, V, adj):
		vis = [0]*V
		
		def dfs(cur, parent):
		    vis[cur] = 1
		    
		    for i in adj[cur]:
		        if not vis[i]:
		            if dfs(i, cur): return True
		        elif i != parent:
		            return True
		            
		    return False
		
		for i in range(V):
		    if not vis[i]:
		        if dfs(i, -1): return True
		        
		return False
