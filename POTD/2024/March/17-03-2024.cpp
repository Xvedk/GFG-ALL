class Solution{
  public:
    // your task is to complete this function
    int countPairs(struct Node* head1, struct Node* head2, int x) {
        unordered_map<int,int>mp;
        Node* t1 = head1;
        Node*t2 = head2;
        while(t1 !=NULL ){
            mp[t1->data]++;
            t1 = t1->next;
        }
        int cnt =0;
        while(t2!=NULL){
            if(mp.find(x-t2->data) !=mp.end()){
                cnt++;
            }
            t2 = t2->next;
        }
        return cnt;
    }
};
