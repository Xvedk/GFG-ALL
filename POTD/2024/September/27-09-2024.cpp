class Solution {
public:
    // Function to find maximum of each subarray of size k.
    vector<int> max_of_subarrays(int k, vector<int> &arr) {
        vector<int> max_els;
        int n = arr.size();

        if (n == 0 || k <= 0) return max_els;
        if (k > n) k = n;

        int maxx = arr[0];
        for (int i = 0; i < k; ++i) {
            maxx = max(maxx, arr[i]);
        }
        max_els.push_back(maxx);

        for (int i = k; i < n; ++i) {
            if (arr[i - k] == maxx) {
                maxx = arr[i - k + 1];
                for (int j = i - k + 2; j <= i; ++j) {
                    maxx = max(maxx, arr[j]);
                }
            } else {
                maxx = max(maxx, arr[i]);
            }
            max_els.push_back(maxx);
        }

        return max_els;
    }
};
