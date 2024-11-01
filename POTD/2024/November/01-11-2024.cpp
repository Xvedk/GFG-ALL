class Solution {
  public:
    long long maxSum(vector<int>& arr) {
        long long ans = 0;
        int n = arr.size();
        sort(arr.begin(),arr.end());
        vector<int>vec;
        int i=0,j=n-1;
        while(i<=j){
            vec.push_back(arr[i]);
            vec.push_back(arr[j]);
            i++;j--;
        }
        for(int i=1;i<n;i++){
            ans += abs(vec[i]-vec[i-1]);
            if(i == n-1){
                ans += abs(vec[i]-vec[0]);
            }
        }
        return ans;
    }
};
