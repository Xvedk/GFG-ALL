
class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // your code here
        if(head==NULL || head->next==NULL) return false;
        Node* slowPtr=head;
        Node* fastPtr=head;
        int flag=0;
            slowPtr=slowPtr->next;
            fastPtr=fastPtr->next->next;
        while(fastPtr!=NULL && fastPtr->next!=NULL){
            if(slowPtr==fastPtr){
                flag++;
                break;
            }
            slowPtr=slowPtr->next;
            fastPtr=fastPtr->next->next;
        }
        
        return(flag);
    }
};
