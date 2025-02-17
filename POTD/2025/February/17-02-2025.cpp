class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        multiset <int> st;
        
        for(auto& e: arr){
            st.insert(e);
            if(st.size() > k) st.erase(st.begin());
        }
        
        vector <int> ans(st.rbegin(), st.rend());
        return ans;
    }
};
