class Solution {
  public:
    // Function to check whether the list is palindrome.
    bool isPalindrome(Node *head) {
        // Your code here
        vector<int> ans;
        Node *temp = head;
        
        while(temp!=nullptr){
            ans.push_back(temp->data);
            temp=temp->next;
        }
        int i = 0;
        int j = ans.size()-1;
        
        while(i<=j){
            if(ans[i] != ans[j])
                return false;
            i++;
            j--;
        }
        return true;
    }
};
