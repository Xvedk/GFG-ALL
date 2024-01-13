class Solution
{
    public:
    Node* insertionSort(struct Node* head_ref)
    {
        vector<int> v;
        Node* temp=head_ref;
        while(temp!=NULL){
            v.push_back(temp->data);
            temp=temp->next;
        }
        sort(v.begin(),v.end());
         temp = head_ref;
    for (int val : v) {
        temp->data = val;
        temp = temp->next;
    }

    return head_ref;
    }
    
};
