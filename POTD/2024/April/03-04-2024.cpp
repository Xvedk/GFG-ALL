class Solution

{

    Node* findnode(Node* temp, int x, int y){

        if(temp==NULL || temp->data == x || temp->data == y){

            return temp;

        }

        Node* leftchild = findnode(temp->left, x, y);

        Node* rightchild = findnode(temp->right, x, y);

        

        if(leftchild == NULL) return rightchild;

        else if(rightchild == NULL) return leftchild;

        else{

            return temp;

        }

    }

    

    public:

    int kthCommonAncestor(Node *root, int k,int x, int y)

    {

        Node* temp = root;

        Node* nd = findnode(temp, x, y);

        

        stack<int> st;

        while(root!=NULL){

            st.push(root->data);

            if(root->data > nd->data){

                root = root->left;

            }

            else if(root->data < nd->data){

                root = root->right;

            }

            else{

                break;

            }

        }

        

        while(k!=1){

            if(st.empty()){

                return -1;

            }

            st.pop();

            k--;

        }

        if(st.empty()) return -1;

        else{

 

            return st.top();

        }

    }

};

