class Solution {
  public:
    long long sumMatrix(long long n, long long q){
        if (q < 2 || q > 2 * n) {
            return 0;
        }
        
        // Calculate the range of valid i values
        long long start = std::max(1LL, q - n);
        long long end = std::min(n, q - 1);
        
        // Return the number of valid cells
        return end - start + 1;
    }
};
