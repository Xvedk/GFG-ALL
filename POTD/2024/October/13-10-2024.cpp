class Solution {
  public:
    void deleteAlt(struct Node *head) {
        while(head!=NULL && head->next!=NULL){
            Node* ptr=head->next;
            head->next=ptr->next;
            head=head->next;
            delete ptr;
        }
    }
};
