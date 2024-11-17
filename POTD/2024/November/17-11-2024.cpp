class Solution {
  public:
    void reverseArray(vector<int> &arr) {
        // code here
        int n = arr.size()-1;
        for(int i =0;i<arr.size();i++)
        {
            if(n>=i)
            {
                int temp = arr[i];
                arr[i] = arr[n];
                arr[n] = temp;
                n--;    
            }
            
        }
    }
};
 
