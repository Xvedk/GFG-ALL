class Solution {
  public:
    
    bool compare(string s){
        int i=0, j=s.size()-1;
        
        while(i<j){
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    
    bool compute(Node* head) {
        string s="";
        while(head!=NULL){
            s+=head->data;
            head=head->next;
        }
        return compare(s);
    }
};
