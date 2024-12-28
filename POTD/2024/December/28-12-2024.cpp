class Solution {
  public:
    vector<vector<int>> findTriplets(vector<int> &arr) {
        unordered_map<int,vector<int>>mp;
        for(int i=0;i<arr.size();i++)
        mp[arr[i]].push_back(i);
        vector<vector<int>>ans;
        for(int i=0;i<arr.size();i++){
            for(int j=i+1;j<arr.size();j++){
                int sum=arr[i]+arr[j];
                if(mp.find(0-sum)!=mp.end()){
                    for(auto x:mp[0-sum]){
                        if(j<x)
                    ans.push_back({i,j,x});
                    }
                }
            }
        }
        return ans;
    }
};
