class Solution {
  public:
    // Function to find maximum product subarray
    int maxProduct(vector<int> &arr) {
        // Your Code Here
        int leftmax = INT_MIN;
        int rightmax = INT_MIN;
        int prod1 = 1;
        int prod2 = 1;
        
        for(int i=0;i<arr.size();i++){
            prod1 *= arr[i];
            if(prod1 == 0){
                prod1 = 1;
            }
            leftmax = max(leftmax,prod1);
            
        }
        
        
        for(int i=arr.size()-1;i>=0;i--){
            prod2 *= arr[i];
            if(prod2 == 0){
                prod2 = 1;
            }
            rightmax = max(rightmax,prod2);
            
        }
        
        return max(leftmax,rightmax);
    }


};
