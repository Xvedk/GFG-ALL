class Solution {
  public:
  
    // code to perforn in-order traversal of BSTs and form two sorted arrays
    
    void inOrderTraversal(Node* root, vector<int>& ans) {
        stack<Node*> s;
        Node* temp = root;
    
        while (!s.empty() || temp!=NULL) {
            while (temp!=NULL) {
                s.push(temp);
                temp = temp->left;
        }
        temp = s.top();
        s.pop();
        ans.push_back(temp->data);
        temp = temp->right;
    }
}
    // code to merge two sorted vector using merge sort
    
    vector<int> MergeSortedVectors(vector<int>& v1,vector<int>& v2) {
        vector<int> mergedArr;
        int i = 0, j = 0;
        while (i < v1.size() && j < v2.size()) {
            if (v1[i] < v2[j]) {
                mergedArr.push_back(v1[i]);
                i++;
            } 
            else {
                mergedArr.push_back(v2[j]);
                j++;
            }
        }
        while (i < v1.size()) {
            mergedArr.push_back(v1[i]);
            i++;
        }
        while (j < v2.size()) {
            mergedArr.push_back(v2[j]);
            j++;
        }
        return mergedArr;
    }

    vector<int> merge(Node *root1, Node *root2) {
        vector<int> v1, v2;
        inOrderTraversal(root1, v1);
        inOrderTraversal(root2, v2);
        return MergeSortedVectors(v1, v2);
    }
};
