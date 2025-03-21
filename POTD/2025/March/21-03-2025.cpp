class Solution {
  public:
    int findMaxSum(vector<int>& arr) {
        // code here
        int n=arr.size();
        int prev1=arr[0], prev2=0, curr=0;
        for(int i=2; i<=n; i++){
            curr=max(prev1, arr[i-1]+prev2);
            prev2=prev1;
            prev1=curr;
        }
        return prev1;
    }
};
