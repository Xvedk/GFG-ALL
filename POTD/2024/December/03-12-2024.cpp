class Solution {
  public:
    vector<int> computeLPS(string s)
    {
        int n=s.length();
        vector<int> lps(n,0);
        int len=0;
        int i=1;
        
        while(i<n)
        {
            if(s[i]==s[len])
            {
                len++;
                lps[i]=len;
                i++;
            }
            else
            {
                if(len!=0)
                    len=lps[len-1];
                else
                {
                    lps[i]=0;
                    i++;
                }
            }
        }
        
        return lps;
    }
    
    int minChar(string& s) {
        // Write your code here
        string rev_str=s;
        reverse(rev_str.begin(),rev_str.end());
        
        string concat_str = s + "#" + rev_str;
        
        vector<int> lps=computeLPS(concat_str);
        
        int palin_prefix_len=lps.back();
        
        return s.length()- palin_prefix_len;
    }
};
