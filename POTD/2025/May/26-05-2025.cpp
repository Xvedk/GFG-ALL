class Solution {
  public:
    Node* sortedInsert(Node* head, int data) {
        // code here
        if(data<=head->data){
            Node* newNode=new Node(data);
            Node* ptr=head->next;
            head->next=newNode;
            newNode->next=ptr;
            swap(head->data,newNode->data);
        }
        else{
        Node* prev=head;
        Node* curr=head->next;
        while(curr!=head && curr->data<data){
            prev=prev->next;
            curr=curr->next;
        }
        Node* newNode=new Node(data);
        prev->next=newNode;
        newNode->next=curr;
        }
        return head;
    }
};
