class Solution {
  public:
    string addBinary(string& s1, string& s2) {
        // your code here
        reverse(s1.begin(), s1.end());
        reverse(s2.begin(), s2.end());
        
        int i=0, j=0;
        int n=s1.size(), m=s2.size();
        string ans="";
        
        int c=0;
        while(i<n && j<m){
            int a=s1[i]-'0';
            int b=s2[j]-'0';
            int sum=a+b+c;
            if(sum==0){
                c=0;
                ans+='0';
            }else if(sum==1){
                c=0;
                ans+='1';
            }else if(sum==2){
                c=1;
                ans+='0';
            }else{
                c=1;
                ans+='1';
            }
            i++;
            j++;
        }
        
        while(i<n){
            int a=s1[i]-'0';
            int sum=a+c;
            if(sum==0){
                c=0;
                ans+='0';
            }else if(sum==1){
                c=0;
                ans+='1';
            }else{
                c=1;
                ans+='0';
            }
            i++;
        }
        
        while(j<m){
            int a=s2[j]-'0';
            int sum=a+c;
            if(sum==0){
                c=0;
                ans+='0';
            }else if(sum==1){
                c=0;
                ans+='1';
            }else{
                c=1;
                ans+='0';
            }
            j++;
        }
        
        if(c==1){
            ans+='1';
        }
        
        reverse(ans.begin(), ans.end());
        
        string final_ans="";
        
        i=0;
        n=ans.size();
        
        while(i<n && ans[i]=='0'){
            i++;
        }
        
        while(i<n){
            final_ans+=ans[i];
            i++;
        }
        
        return final_ans;
        
        
        /*
        1101
         111
        
        1011
        111
        
        00101
        */
    }
};
