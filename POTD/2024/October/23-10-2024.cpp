class Solution {
  public:
    /*Structure of the node of the linled list is as

    struct Node {
        int data;
        struct Node* next;

        Node(int x){
            data = x;
            next = NULL;
        }
    };
    */
    // your task is to complete this function
    // function should return sum of last n nodes
    int sumOfLastN_Nodes(struct Node* head, int n) {
        // Code here
        int count = 0;
        int sum = 0;
        Node* start = head, *curr = head;
        while(curr){
            count++;
            sum += curr -> data;
            curr = curr -> next;
            if(count > n){
                count--;
                sum -= start -> data;
                start = start -> next;
            }
        }
        return sum;
    }
};
