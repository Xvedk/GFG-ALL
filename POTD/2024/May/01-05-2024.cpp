class Solution {
  public:
    // task is to complete this function
    // function should return head to the list after making
    // necessary arrangements
    struct Node* arrangeCV(Node* head) {
        // Code here
        if(head == NULL || head -> next == NULL) return head;
        Node *t = new Node('*');
        t->next = head;
        Node *s = NULL;
        Node *strt = NULL;
        while(t->next != NULL){
            if(t->next->data == 'a' || t->next->data == 'e' || t->next->data == 'i' || t->next->data == 'o' || t->next->data == 'u'){
                if(s == NULL){
                    s = t->next;
                    strt =t->next;
                }else{
                    s->next = t->next;
                    s = t->next;
                }
                if(t->next == head){
                    head=head->next;
                    t=t->next;
                }else{
                    t->next = t->next->next;
                }
            }
            else t=t->next;
        }
        if(s != NULL){
            s->next = head;
            return strt;
        }else{
            return head;
        }
    }
};
