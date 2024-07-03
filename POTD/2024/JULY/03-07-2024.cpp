class Solution {
  public:
    Node* removeAllDuplicates(struct Node* head) {
        // code here
        Node *dup=new Node(-1);
        dup->next=head;
        Node *p=dup;
        while(head!=NULL){
            if(head->next!=NULL && head->data==head->next->data){
                while(head->next!=NULL && head->data==head->next->data){
                    head=head->next;
                }
                p->next=head->next;
            }
            else{
                p=p->next;
            }
            head=head->next;
        }
        return dup->next;
    }
};
