class Solution {
  public:
     int countNumberswith4(int n) {
        int ans=0;
        for(int i=1;i<=n;i++){
            int j=i;
            while(j>0){
                if(j%10==4){
                    ans++;
                    break;
                }
                j/=10;
            }
        }
        return ans;
    }
};
