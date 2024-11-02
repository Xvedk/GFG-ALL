class Solution {
  public:
    bool checkDuplicatesWithinK(vector<int>& arr, int k) {
      unordered_map<int,int>mp;
      int n = arr.size();
      for(int i =0 ;i <n;i++){
          int val = arr[i];
            if(mp[val] && abs(mp[val] - (i+1)) <= k){
                return true;
            }
            mp[val] = i+1;
      }
      return false;
    }
};
