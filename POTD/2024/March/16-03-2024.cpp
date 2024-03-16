class Solution
{
    public:
    //Function to delete a node without any reference to head pointer.
    void deleteNode(Node *del_node)
    {
       // Your code here
  
       Node*p=del_node;
       Node*q=NULL;
       int temp;
       while(p->next!=NULL)
       {
          temp=p->data;
          p->data=p->next->data;
          p->next->data=temp;
          q=p;
          p=p->next;
       }
       q->next=NULL;
       delete p;
    }
};
