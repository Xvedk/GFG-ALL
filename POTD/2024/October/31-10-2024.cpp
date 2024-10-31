class Solution {
  public:
    Node* sortedInsert(Node* head, int x) {

        Node* curr=head;
        Node* ele=new Node();
        ele->data=x;
        ele->prev=ele->next=NULL;
        
         if (x <= head->data) {
            ele->next = head;
            head->prev = ele;
            return ele;
        }
        
       while (curr->next != NULL && curr->data < x) {
            curr = curr->next;
        }

        // Insert the new node
        if (curr->data >= x) {
            ele->prev = curr->prev;
            ele->next = curr;
            curr->prev->next = ele;
            curr->prev = ele;
        } else {
            // Insert at the end if we reach the last node
            curr->next = ele;
            ele->prev = curr;
        }

        return head;
    }
};

