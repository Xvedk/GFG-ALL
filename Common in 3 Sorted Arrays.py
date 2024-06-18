class Solution:
    def commonElements (self,A, B, C, n1, n2, n3):
        # your code here
        setA = set(A)
        setB = set(B)
        setC = set(C)
        
        # Find the intersection of the three sets
        common = setA & setB & setC
        
        # Convert to list and sort
        result = sorted(common)
        
        return result
