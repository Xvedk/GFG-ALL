class Solution {
  public:
    int longestSubarray(vector<int>& arr, int k) {
        int n = arr.size();
        int ans = 0;
        
        unordered_map <int, vector <int>> mp;
        mp[0].push_back(-1);
        
        int sum = 0;
        for(int i = 0; i < n; i++){
            sum += arr[i];
            if(!mp[sum-k].empty()){
                int idx = mp[sum-k].front();
                ans = max(ans, i - idx);
            }
            mp[sum].push_back(i);
        }
        
        return ans;
    }
};
