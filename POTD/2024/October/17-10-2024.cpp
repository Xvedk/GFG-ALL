class Solution {
  public:
    // Function to split a linked list into two lists alternately
    vector<Node*> alternatingSplitList(struct Node* head) {
        // Your code here
        vector<Node*>ans;
        Node* link1 = new Node(-1);
        Node* link2 = new Node(-1);
        
        Node* mptrA = link1;
        Node* mptrB = link2;
        
        Node* temp = head;
        int i=0;
        while(temp){
            if(i%2 == 0){
                mptrA->next = temp;
                mptrA = temp;
            }
            else{
                mptrB->next = temp;
                mptrB = temp;
            }
            i++;
            temp = temp->next;
        }
        mptrA->next = nullptr;
        mptrB->next = nullptr;
        
        ans.push_back(link1->next);
        ans.push_back(link2->next);
        return ans;
        return ans;
    }
};
