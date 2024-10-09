class Solution {
  public:
     void insert_Node(const vector<vector<int>> &mat, const int &n, 
    int &i, int &j, Node *&head, Node *&curr){
        if (i == n)
            return;
        if (!head){
            Node *temp = new Node(mat[i][j]);
            head = curr = temp;
            insert_Node(mat,n,i,j,head,curr);
        } else {
            if (!curr->right && j+1 < n){
                Node *temp = new Node(mat[i][j+1]);
                curr->right = temp;
            }
            if (!curr->down && i+1 < n){
                Node *temp = new Node(mat[i+1][j]);
                curr->down = temp;
            }
            j++;
            curr = curr->right;
            if (j == n){
                j = 0;
                i++;
                Node *temp{head};
                int k{};
                while (temp->down){
                    temp = temp->down;
                    k++;
                }
                curr = temp;
            }
            insert_Node(mat,n,i,j,head,curr);
            
        }
               
    }
    Node* constructLinkedMatrix(vector<vector<int>>& mat) {
        // code Here
        int n{static_cast<int>(mat.size())};
        Node *head{nullptr}, *curr{};
        int i{},j{};
        insert_Node(mat,n,i,j,head,curr);
        return head;
    }
};
