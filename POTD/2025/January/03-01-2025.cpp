class Solution {
  public:
    long subarrayXor(vector<int> &arr, int k) {
        // code here
        map<int,int>mp;
        int cnt=0,sum=0;
        for(auto& a:arr){
            sum^=a;
            cnt+=(sum==k);
            cnt+=mp[sum^k];
            mp[sum]++;
        }
        return cnt;
    }
};
