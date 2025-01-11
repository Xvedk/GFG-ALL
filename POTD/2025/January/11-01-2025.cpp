class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        // code here
        int n = s.length();
        int i=0;
        int j=0;
        map<int,int>m;
        int ans = 0;
        while(i<n){
            m[s[i]]++;
            if(m[s[i]]>1){
                while(j<i && m[s[i]]>1){
                    m[s[j++]]--;
                }
            }
            ans = max(ans,i-j+1);
            i++;
        }
        return ans;
    }
};
