
class Solution:
    def findSpiral(self, root):
        
        d = {}
        def traverse(node, level):
            if not node:
                return
            if level not in d:
                d[level] = []
            d[level].append(node.data)
            traverse(node.left, level + 1)
            traverse(node.right, level + 1)
            
        traverse(root, 0)
        ans = []
        for i in d:
            if i % 2:
                ans.extend(d[i])
            else:
                ans.extend(d[i][::-1])
        return ans
