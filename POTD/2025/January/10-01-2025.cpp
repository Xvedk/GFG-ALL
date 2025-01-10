class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here.
        unordered_map<int,int> mp;
        int n=arr.size();
        for(int i=0;i<k;i++){
            mp[arr[i]]++;
        }
        vector<int> res;
        res.push_back(mp.size());
        for(int i=k;i<n;i++){
            if(--mp[arr[i-k]]==0) mp.erase(arr[i-k]);
            mp[arr[i]]++;
            res.push_back(mp.size());
        }
        return res;
    }


};
