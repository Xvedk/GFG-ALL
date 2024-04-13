class Solution {
  public:
    long long reversedBits(long long x) {
        // code here
        long long ans=0;
        int i=31;
        while(x>0){
            int d=x%2;
            ans+=d*pow(2,i);
            i--;
            x=x/2;
        }
        return ans;
    }
};
