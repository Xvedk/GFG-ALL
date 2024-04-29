class Solution {
    public:
    Node* deleteK(Node *head,int k){
      //Your code here
      if(k == 1){
          return NULL;
      }
      
      bool __isStarted{false};
      int cnt{0};
      Node* ptr{head};
      while(ptr){
          ++cnt;
          if((cnt + 1)%k == 0){
              if(ptr){
                  ptr->next ? ptr->next = ptr->next->next : ptr->next = NULL;
              }
              ++cnt;
          }
          ptr = ptr->next;
      }
      ptr = NULL;
      return head;
    }

};
