class Solution {
  public:
    double power(double b, int e) {
    if (e == 0) return 1; 
    if (e == 1) return b; 

    bool negative = (e < 0); 
    e = abs(e);

    double solve = power(b, e / 2);
    double ans;

    if (e % 2 == 0) {
        ans = solve * solve;
    } else {
        ans = solve * solve * b;
    }
 
    if (negative) {
        return 1.0 / ans;
    }

    return ans;
}
};
