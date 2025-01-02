class Solution {
  public:
    int countSubarrays(vector<int> &arr, int k) {
        // code here
          unordered_map<int,int>mpp;
             mpp[0] = 1;
               int presum=0,c=0;
        for(int i=0;i<arr.size();i++){
            presum=presum+arr[i];
            int remove=presum-k;
            c=c+mpp[remove];
            mpp[presum]=mpp[presum] + 1;
        }
        return c;
    }
};
