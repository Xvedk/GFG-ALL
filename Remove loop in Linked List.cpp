class Solution
{
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head == NULL)
        {
            return;
        }
        
        
        unordered_map<Node* ,bool> visited;
        
        Node *curr = head;
        while(curr != NULL)
        {
            if(visited[curr->next] == true)
            {
                curr->next = NULL;
                break;
            }
            visited[curr] = true;
            curr = curr->next;
        }
    }
};
