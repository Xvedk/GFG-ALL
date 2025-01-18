class Solution {
  public:
    Node* reverseList(struct Node* head) {
        // code here
        vector<int> ans;
        struct Node *hd=head;
        while(hd!=NULL){
            ans.push_back(hd->data);
            hd=hd->next;
        }
        
        reverse(ans.begin(),ans.end());
        struct Node *temp= new Node(ans[0]);
        struct Node *tt=temp;
        
        for(int i=1;i<ans.size();i++){
            struct Node *n= new Node(ans[i]);
            temp->next=n;
            temp=temp->next;
        }
        return tt;
        
    }
};
