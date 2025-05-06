class Solution:
    def LeftView(self, root):
        
        def dfs(node, depth=0, view=[]):
            if node is None:
                return view
            if depth == len(view):
                view.append(node.data)
            dfs(node.left, depth + 1)
            dfs(node.right, depth + 1)
            return view
        
        return dfs(root)
