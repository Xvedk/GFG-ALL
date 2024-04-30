class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* l1, struct Node* l2)
    {
        // code here
        while (l1 && l1->data == 0)
            l1 = l1->next;
        while (l2 && l2->data == 0)
            l2 = l2->next;
        if(!l1 && !l2)
            return new Node(0);
       stack<int>stk1,stk2;
        while(l1){
            stk1.push(l1->data);
            l1=l1->next;
        }
        while(l2){
            stk2.push(l2->data);
            l2=l2->next;
        }
        Node* temp=NULL;
        int carry=0;
        while(!stk1.empty() || !stk2.empty() || carry){
            int digit1= !stk1.empty() ? stk1.top() : 0;
            int digit2= !stk2.empty() ? stk2.top() : 0;
            int sum=digit1+digit2+carry;
            carry=sum/10;
            Node* newNode=new Node(sum%10);
            newNode->next=temp;
            temp=newNode;
            if(!stk1.empty())
                stk1.pop();
            if(!stk2.empty())
                stk2.pop();
        }
        return temp;
    }
};
