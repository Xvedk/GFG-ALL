Node* rotate(Node* head, int k) {
        Node* newHead;
        Node* newTail;
        Node* tail = head;
        bool is_K_Equals_length = true;
        int count = 0;
    
        while (tail->next != NULL){
            count++;
            if(count == k){
                newTail = tail; // setting newTail
                newHead = tail->next; // setting newHead
                is_K_Equals_length = false;
            }
            tail = tail->next;
        }
        
        if(is_K_Equals_length)
            return head;
        
        newTail->next = NULL;
        tail->next = head;
    
        return newHead;
    }
