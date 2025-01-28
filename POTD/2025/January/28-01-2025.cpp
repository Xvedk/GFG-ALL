class Solution {
  public:
    void generate(int i, set<string> &st, string &s, int n){
        if(i >= n) return;
        
        st.insert(s);
        
        for(int j = i; j < n; j++){
            swap(s[i], s[j]);
            generate(i+1, st, s, n);
            swap(s[i], s[j]);
        }
    }
  
    vector<string> findPermutation(string &s) {
        int n = s.length();
        set <string> st;
        
        generate(0, st, s, n);
        vector <string> ans(st.begin(), st.end());
        return ans;
    }
};
