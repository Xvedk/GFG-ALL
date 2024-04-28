class Solution{
    public:
    Node* deleteMid(Node* head)
    {
        Node *tp=head;
        int count=0;
        map<int,Node*>ans;
        while(tp!=NULL)
        {
            ans[count++]=tp;
            tp=tp->next;
        }
       
        tp=ans[ans.size()/2 - 1];
        tp->next=tp->next->next;
       
        return head;
     }
};
