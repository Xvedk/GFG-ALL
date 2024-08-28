class Solution {
  public:
    // Complete this function
    // Function to sort the array according to frequency of elements.
    vector<int> sortByFreq(vector<int>& arr) {
        vector<int> ans;
        int n=arr.size();
        map<int,int> mp;
        multiset<pair<int,int>> m;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        for(auto it:mp){
              int num=it.first;
           int freq=it.second;
           m.insert({freq,-num});
        }
        for(auto it:m){
            int freq=it.first;
            int num=it.second;
            while(freq>0){
                ans.push_back(-num);
                freq--;
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
