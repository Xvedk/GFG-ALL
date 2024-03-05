vector<int> leftView(Node *root) {
    vector<int> ans;
    
    if (root == nullptr) {
        return ans; 
    }
    
    Node* temp = new Node(); 
    queue<Node*> bfs;
    ans.push_back(root->data);
    bfs.push(root);
    bfs.push(temp);
   
    while (!bfs.empty()) {
        Node* top = bfs.front();
        bfs.pop();
       
        if (top == temp) {
            if (!bfs.empty()) {
                Node* val = bfs.front();
                ans.push_back(val->data);
                bfs.push(temp);
            } else {
                break;
            }
        } else {
            if (top->left != nullptr) {
                bfs.push(top->left);
            }
            if (top->right != nullptr) {
                bfs.push(top->right);
            }
        }
    }
   
    delete temp;
    return ans;
}
