class Solution {
  public:
    // Function to find intersection point in Y shaped Linked Lists.
   int intersectPoint(Node* head1, Node* head2) {
        Node* tmp1 = head1, *tmp2 = head2;
        
        while(tmp1!=tmp2){
            tmp1=tmp1->next;
            tmp2=tmp2->next;
            
            if(!tmp1)tmp1=head1;
            if(!tmp2)tmp2=head2;
        }
        return tmp1->data;
    }
};
