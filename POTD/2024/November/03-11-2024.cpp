class Solution {
  public:
    bool isLengthEven(struct Node **head) {
        int count = 0;
        for(auto i = *head; i != NULL; i = i -> next) count++;
        return (count%2 == 0 ? true : false);
    }
};
