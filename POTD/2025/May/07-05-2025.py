from collections import deque

class Solution:
    def Paths(self, root):
        
        def fun(node, path):
            if not node:
                return
            elif not node.left and not node.right:
                res.append(path+[node.data])
                return
            else:
                fun(node.left, path+[node.data])
                fun(node.right, path+[node.data])
        
        res = []
        fun(root, [])
        return res
