class Solution:
    def findPreSuc(self, root, key):
        self.predecessor = None
        self.successor = None
        self.key = key
        
        self._traverse(root)
        
        return self.predecessor, self.successor

    def _traverse(self, node):
        if node is None:
            return
        
        # Check if node.data < key and greater than current predecessor
        if node.data < self.key:
            if (self.predecessor is None) or (node.data > self.predecessor.data):
                self.predecessor = node
        
        # Check if node.data > key and less than current successor
        if node.data > self.key:
            if (self.successor is None) or (node.data < self.successor.data):
                self.successor = node
        
        self._traverse(node.left)
        self._traverse(node.right)
