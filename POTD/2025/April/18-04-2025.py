class trienode():
    def __init__(self):
        self.children = {}
        self.is_end = False
        
class Trie:
    def __init__(self):
        # implement Trie
        self.root = trienode()
        
    def insert(self, word: str):
       # insert word into Trie
       node = self.root
       for char in word:
           if char not in node.children:
               node.children[char] = trienode()
           node = node.children[char]
       node.is_end = True

    def search(self, word: str) -> bool:
         # search word in the Trie
         node = self.root
         for char in word:
             if char not in node.children:
                 return False
             node = node.children[char]
         return node.is_end

    def isPrefix(self, word: str) -> bool:
         # search prefix word in the Trie
         node = self.root
         for char in word:
             if char not in node.children:
                 return False
             node = node.children[char]
         return True

