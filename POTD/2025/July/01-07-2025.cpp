int substrCount(string &s, int k) {
        // code here
        int n=s.length();
        int i=0, j=0, f[26]={0}, ans=0, uniq=0;
        
        for(; j<n; j++){
            if(f[s[j]-'a']==0){
                uniq++;
            }
            f[s[j]-'a']++;
            for(; i<n && (j-i+1>k); i++){
                f[s[i]-'a']--;
                if(f[s[i]-'a']==0) uniq--;
            }
            if((j-i+1==k) && uniq==(k-1)) ans++;
        }
        return ans;
    }
