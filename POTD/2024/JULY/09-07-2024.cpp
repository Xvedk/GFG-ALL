class Solution {
  public:
    int threeSumClosest(vector<int> arr, int target) {
        // Your code goes here
        sort(arr.begin(),arr.end());
        int n = arr.size(),mini = INT_MAX,ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(i>0 and arr[i] == arr[i-1])
                continue;
            int j= i+1;
            int k=n-1;
            while(j<k)
            {
                int sum = arr[i]+arr[j] +arr[k];
                if(sum == target)
                    return target;
                else if(sum > target)
                {
                    
                    k--;
                }
                else
                {
                    
                    j++;
                }
                if(abs(sum-target) <= mini)
                {
                    if(mini ==abs(sum-target) )
                        ans = max(ans,sum);
                    else
                        ans = sum;
                    mini = abs(sum-target);
                    
                }
            }
            
        }
        return ans;
    }
};
