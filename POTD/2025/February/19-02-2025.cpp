class Solution {
  public:
    Node* merge(Node* list1,Node* list2){
        if(list1==NULL){
            return list2;
        }
        else if(list2==NULL){
            return list1;
        }
        else if(list1->data<list2->data){
            list1->next=merge(list1->next,list2);
            return list1;
        }
        else {
            list2->next=merge(list2->next,list1);
            return list2;
        }
    }
    Node* mergeKLists(vector<Node*>& arr) {
        // Your code here
        Node* temp=arr[0];
        if(arr.size()==1){
            return temp;
        }
        for(int i=1;i<arr.size();i++){
            temp=merge(temp,arr[i]);
        }
        return temp;
        
    }
};
 
