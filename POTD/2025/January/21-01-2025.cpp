class Solution {
  public:
    Node *reverseKGroup(Node *head, int k) {
        Node* ans = new Node(-1);
        Node* temp = ans;
        Node* op = head;
        stack<int> st;
        int cnt = 0;
        while(op != NULL){
            st.push(op->data);
            cnt++;
            op=op->next;
            if(cnt==k){
                while(!st.empty()){
                    temp->next = new Node(st.top());
                    temp = temp->next;
                    st.pop();
                }
                cnt = 0;
            }
        }
         while(!st.empty()){
                    temp->next = new Node(st.top());
                    temp = temp->next;
                    st.pop();
                }
        return ans->next;
    }
};

