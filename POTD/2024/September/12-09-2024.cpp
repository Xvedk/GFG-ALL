class Solution {
  public:
    /* Should return data of middle node. If linked list is empty, then -1 */
    int getMiddle(Node* head) {
        Node* temp = head;
        int n = 0;
        while(temp != NULL){
        n++;
        temp = temp ->next;
        }
        temp = head;
        int mid = n/2+1;
        while(mid != 1){
            mid--;
            head = head->next;
        }
     return head->data;   
    }
};
