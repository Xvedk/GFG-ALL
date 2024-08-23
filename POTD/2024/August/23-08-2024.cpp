vector<int> leftView(Node *root)
{
     vector<int>ans;
     queue<Node*>q;
     q.push(root);
     while(q.empty()==false){
         int n=q.size();
         int ele=-1;
         for(int i=0;i<n;i++){
             
             auto ptr=q.front();
             q.pop();
             if(ele==-1)
             ele=ptr->data;
             
             if(ptr->left)
             q.push(ptr->left);
             if(ptr->right)
             q.push(ptr->right);
             
         }
         ans.push_back(ele);
     }
     return ans;
}
