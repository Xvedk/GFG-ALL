class Solution:
    
    #Function to check whether a Binary Tree is BST or not.
    def helper(self,root,min_range,max_range):
        if root is None:
            return True
            
        if root.data < min_range or root.data > max_range:
            return False
            
        isLeftOk = self.helper(root.left,min_range,root.data-1)
        isRightOk = self.helper(root.right,root.data,max_range)
        return isLeftOk and isRightOk
    def isBST(self, root):
        #code here
        min_range = float('-INF')
        max_range = float('INF')
        return self.helper(root,min_range,max_range)
