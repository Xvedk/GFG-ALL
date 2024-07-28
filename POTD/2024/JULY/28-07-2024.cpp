class Solution {
  public:

    string removeDups(string str) {
        // Your code goes here
        unordered_map<char,int>mp;
        int n=str.size();
        string ans="";
        for(int i=0;i<n;i++){
            if(mp.find(str[i])==mp.end()){
                ans+=str[i];
                mp[str[i]]=1;
            }
            
        }
        return ans;
    }
};
