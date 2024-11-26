class Solution {
  public:
    // arr: input array
    // Function to find maximum circular subarray sum.
      int circularSubarraySum(vector<int> &arr) {
        // your code here
   int n = arr.size();
    int total_sum = 0;
    int max_normal = INT_MIN, max_ending = 0;
    int min_normal = INT_MAX, min_ending = 0;

    for (int i = 0; i < n; i++) {
        total_sum += arr[i];
        
        // Kadane's for maximum subarray sum
        max_ending = max(arr[i], max_ending + arr[i]);
        max_normal = max(max_normal, max_ending);
        
        // Kadane's for minimum subarray sum
        min_ending = min(arr[i], min_ending + arr[i]);
        min_normal = min(min_normal, min_ending);
    }
    
    // Handle case where all elements are negative
    if (max_normal < 0) return max_normal;
    
    // Maximum circular sum is either max_normal or total_sum - min_normal
    return max(max_normal, total_sum - min_normal);
    }
};
