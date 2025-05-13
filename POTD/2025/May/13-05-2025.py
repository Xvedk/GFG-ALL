class Solution:
    def nCr(self, n, r):
        # code here
        fact = [1] * (n + 1)
        
        for i in range(2, n + 1):
            fact[i] = i * fact[i - 1]
            
        return fact[n]//(fact[r] * fact[n - r]) if n >= r else 0
