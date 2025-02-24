class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        vector<int>ans(arr.size(),1);
        stack<pair<int,int>>st;
        st.push({arr[arr.size()-1],arr.size()-1});
        for(int i =arr.size()-2;i>=0;i--){
            
            if(arr[i]<=st.top().first)st.push({arr[i],i});
            else{
                while(!st.empty()&&st.top().first<arr[i]){
                    ans[st.top().second]=st.top().second-i;
                    st.pop();
                }
                st.push({arr[i],i});
            } 
            
        
        }
        while(!st.empty()&&st.top().first<INT_MAX){
                    ans[st.top().second]=st.top().second-(-1);
                    st.pop();
        }
        return ans;
        
    }
};
