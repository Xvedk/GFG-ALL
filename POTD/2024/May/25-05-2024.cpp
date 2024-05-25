class Solution {
  public:
    /*You are requried to complete this method */
    long long max_Books(int arr[], int n, int k) {
        // Your code here
        long long mx = 0, temp = 0;
        int i = 0;
        while(i<n){
            if(arr[i] <=k ){
                temp += arr[i];
            }
            else{
                mx = max(mx, temp);
                temp = 0;
            }
            i++;
        }
        mx = max(mx, temp);
        return mx;
    }
};
