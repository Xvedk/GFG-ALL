class Solution {
  public:
     Node* deleteNode(Node* head, int x) {
        Node* temp = head;
        Node* curr = NULL;
        if(x == 1)
        {
            temp = temp->next;
            temp->prev = NULL;
            return temp;
        }
        int cnt = 1;
        while(cnt < x)
        {
            curr = temp;
            temp = temp->next;
            cnt++;
        }
        curr->next = temp->next;
        temp->next = NULL;
        temp->prev = NULL;
        delete temp;
        return head;
    }


};
