class Solution {
  public:
    int rotateDelete(vector<int> &arr) {
        int z = arr.size();
        int operations = z / 2;
        
        for (int k = 1; k <= operations; k++) {
            rotate(arr);
            
            int n = arr.size();
            int pos = n - k; 
            arr.erase(arr.begin() + pos);
        }
        
        return arr[0];
    }
    
    void rotate(vector<int> &arr) {
        int n = arr.size();
        int last = arr[n - 1]; 
        
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        
        arr[0] = last;  
    }
};
