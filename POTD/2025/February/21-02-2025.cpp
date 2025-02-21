class Solution {
  public:
    bool isBalanced(string& s) {
      
        stack<char> st;
        for(auto c: s){
            if(c==')' || c=='}' || c==']'){
                if(st.empty()) return false;
                char c_=st.top();
                st.pop();
                if(c==')' && c_!='(') return false;
                if(c=='}' && c_!='{') return false;
                if(c==']' && c_!='[') return false;
            }
            else st.push(c);
        }
        return st.empty();
    }


};
