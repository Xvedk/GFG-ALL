class Solution 
{
  public:
    int maxLength(string str) 
    {
        stack<char> st;
        stack<int> pt;
        st.push('#');
        pt.push(-1);
        int maxVal=0;
        int n=str.size();
        for(int i=0;i<n;i++){
            if(str[i]==')' && !st.empty() && st.top()=='(')
            {
                st.pop();
                pt.pop();
                maxVal=max(maxVal,i-pt.top());
            }
            else{
                st.push(str[i]);
                pt.push(i);
            }
        }
        return maxVal;
    }
};
