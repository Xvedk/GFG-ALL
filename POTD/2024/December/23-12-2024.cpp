class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        
        for(vector<int>& arr: mat) {
            int cnt = count(arr.begin(),arr.end(), x);
            
            if(cnt > 0){
                return true;
            }
        }
        return false;
    }
};
