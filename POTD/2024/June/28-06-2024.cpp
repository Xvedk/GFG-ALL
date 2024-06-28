class Solution {
  public:
  
    string pattern(vector<vector<int>> &arr) {
        
        int n=arr.size();
        int ans=INT_MAX;
        

        // check for ith row and column at once
        for(int i=0 ;i<n; i++){
            int left=0 , right=n-1 ;
            bool flagR=true , flagC=true;
            
            while(left<right){
                if(arr[i][left]!=arr[i][right]) flagR=false;
                if(arr[left][i]!=arr[right][i]) flagC=false;
                left++;
                right--;
            }

            // return if you find any row palindrome
            if(flagR) return to_string(i)+" R";

            //if column is palindrome store in ans
            if(flagC) ans=min(ans,i);
            
        }
        
        if(ans!=INT_MAX) return to_string(ans)+" C";
        return "-1";
    }
};
