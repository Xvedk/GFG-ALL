class Solution {
  public:
    vector<int> rearrange(const vector<int>& arr) {
        int maxi = INT_MIN;
    
        for (int it : arr) {
            maxi = max(maxi, it);
        }
    
        vector<int> ans(max(maxi + 1, (int)arr.size()), -1);
        
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] < ans.size()) {
                ans[arr[i]] = arr[i];
            }
        }
        
        return ans;
}
};
