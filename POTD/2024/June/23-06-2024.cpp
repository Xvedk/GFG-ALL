class Solution {
  public:

    vector<int> bracketNumbers(string str) {
        // Your code goes here
        stack<int>stk;
        vector<int> ans;
        int cnt=1;
        for(int i=0;i<str.length();i++){
            if(str[i]=='('){
                stk.push(cnt);
                ans.push_back(cnt);
                cnt++;
            }
            if(str[i]==')'){
                int lastelement = stk.top();
                stk.pop();
                ans.push_back(lastelement);
            }
        }
        return ans;
        
    }
};
