class Solution {
  public:
    int countWays(int n) {
    static const double sqrt5 = sqrt(5.0);
        static const double phi   = (1.0 + sqrt5) / 2.0;
    
        double approx = pow(phi, n + 1) / sqrt5;
    
        return static_cast<int>(approx + 0.5);
        
    }
};
