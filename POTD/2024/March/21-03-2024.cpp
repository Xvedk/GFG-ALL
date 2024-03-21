class Solution{
    public:
    //Function to store the zig zag order traversal of tree in a list.
    vector <int> zigZagTraversal(Node* root)
    {
        // Code here
    
        vector<int> result;
        if (!root) return result;

        queue<Node*> q;
        q.push(root);
        bool evenLevel = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> levelNodes(size);

            for (int i = 0; i < size; ++i) {
                Node* node = q.front();
                q.pop();

                if (evenLevel) {
                    levelNodes[i] = node->data;
                } else {
                    levelNodes[size - 1 - i] = node->data;
                }

                if (node->left) q.push(node->left);
                if (node->right) q.push(node->right);
            }
            evenLevel = !evenLevel;

            for (int val : levelNodes) {
                result.push_back(val);
            }
        }

        return result;
    }
};

