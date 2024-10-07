struct Node *insert(struct Node *head, int data) {
    // Code here
    struct Node* temp = new Node(data);
    temp->npx =head;
    
    return temp;
    
}

vector<int> getList(struct Node *head) {
    // Code here
    vector<int> ans;
    struct Node* temp = head;
    
    while(temp){
        ans.push_back(temp->data);
        temp = temp->npx;
    }
    return ans;
}
