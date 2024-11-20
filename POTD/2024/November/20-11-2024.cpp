class Solution {
  public:
    // Function to find the majority elements in the array
    vector<int> findMajority(vector<int>& arr) {
        // Your code goes here.
        int n=arr.size();
        int vote=n/3;
        unordered_map<int,int>mp;
        for(int &num:arr){
            mp[num]++;
        }
        vector<int>ans;
        for(auto &it:mp){
            if(it.second>vote){
                ans.push_back(it.first);
            }
        }
        sort(begin(ans),end(ans));
        return ans;
    }
};
