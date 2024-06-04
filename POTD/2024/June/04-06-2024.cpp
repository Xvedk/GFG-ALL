class Solution {
  public:
    string binaryNextNumber(string s) {
        // code here.
        string ans;
        int n = s.size(),i;
        
        for(i=n-1;i>=0;i--){
            if(s[i]=='0') {
                ans+='1';
                if(i>0) i--;
                break;
            }
            else ans+='0';
        }
        if(i==-1) ans+='1';
        for( ;i>=0;i--){
            ans+=s[i];
        }
        
        reverse(ans.begin(),ans.end());
        
        string res ="";
        int j;
        for(j=0;j<ans.size();j++){
            if(ans[j]=='1') break;
        }
        for(;j<ans.size();j++) res+=ans[j];
        
        return res;
    }
};
