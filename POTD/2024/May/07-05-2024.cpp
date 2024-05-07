vector<int> reverseLevelOrder(Node *root)
{
    queue<Node*> q;
    q.push(root);
    vector<int> v;
    vector<vector<int>> ans;
    while(!q.empty()){
        int size=q.size();
        for(int i=0;i<size;i++){
            Node* temp=q.front();
            q.pop();
            v.push_back(temp->data);
            if(temp->left){
                q.push(temp->left);
            }
            if(temp->right){
                q.push(temp->right);
            }
        }
        ans.push_back(v);
        v.clear();
    }
    reverse(ans.begin(),ans.end());
    // return ans;
    v.clear();
    for(auto x:ans){
        for(int i=0;i<x.size();i++){
            v.push_back(x[i]);
        }
    }
    return v;
}
