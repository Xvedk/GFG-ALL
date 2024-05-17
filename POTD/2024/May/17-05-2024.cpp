class Solution {
  public:
   int findPair(int n, int x, vector<int> &arr) {
        sort(arr.begin(),arr.end(),greater<int>());
        set<int>st;

        for(int i=0; i<n; i++)
            if(st.find(abs(x+arr[i])) != st.end()){
                return 1;
            }else{
                st.insert(arr[i]);
            }
                
        return -1;
    }
};
