class Solution {
  public:
    stack<pair<int,int>>s;
    
    Solution() {
        // code here
        
    }

    // Add an element to the top of Stack
    void push(int x) {
        // code here
        if(s.empty()) {
            s.push({x,x});
            
        }else{
            int topelement=s.top().second;
            s.push({x,min(x,topelement)});
        }
    }

    // Remove the top element from the Stack
    void pop() {
        // code here
        if(!s.empty()) s.pop();
    }

    // Returns top element of the Stack
    int peek() {
        // code here
        
        if(!s.empty()){
            int e=s.top().first;
            return e;
        }else return -1;
    }

    // Finds minimum element of Stack
    int getMin() {
        // code here
      if(!s.empty()){
          return s.top().second;
      }else return -1;
        
    }
};
