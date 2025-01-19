class Solution {
  public:
    Node* rotate(Node* head, int k) {
        int n = 0;
        Node* tail = head;
        Node* tmp = head;
        while(tmp){
            n++;
            if(tmp->next==NULL) tail = tmp;
            tmp=tmp->next;
            
        }
        tmp = head;
        k= k%n;
        if(k==0) return head;
        tail->next = head;
        while(k>1){
            tmp = tmp->next;
            k--;
        }
        head = tmp->next;
        tmp->next=NULL;
        return head;
        // Your code here
    }
};
