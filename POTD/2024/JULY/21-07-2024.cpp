class Solution {
public:
    long long int findMaxProduct(vector<int>& arr) {
        
        long long int ans = 1;
        int mxNeg = INT_MIN;
        
        // Traverse through each element in the array
        for (int i : arr) {
            // Calculate the product modulo 10^9 + 7
            if (i != 0) {
                ans = (ans * i) % 1000000007;
            }
            // Track the maximum negative number encountered
            if (i < 0) {
                mxNeg = max(i, mxNeg);
            }
        }
        
        // If ans is negative and there was a negative number encountered,
        // adjust ans by dividing by mxNeg
        if (ans < 0) {
            ans = ans / mxNeg;
        }
        
        return ans;
    }
};
